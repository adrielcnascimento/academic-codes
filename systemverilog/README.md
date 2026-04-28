# Projetos VFSD — Verificação Funcional de Sistemas Digitais

> **Disciplina:** Verificação Funcional de Sistemas Digitais — Período 2023.1  
> **Professor:** George Sobral  
> **Alunos:** Adriel Cassimiro e Diogo Santos  
> **Plataforma:** Intel DE1-SoC (FPGA Cyclone V)  
> **Ferramentas:** Intel Quartus Prime · SystemVerilog / Verilog

---

## Visão Geral

Este repositório reúne três projetos desenvolvidos para a placa **DE1-SoC**, todos descritos em SystemVerilog e sintetizados via Intel Quartus Prime. Cada projeto explora um subsistema diferente de hardware digital: um sistema de alarme, um frequencímetro e um controlador de ADC via protocolo SPI.

---

## 📁 Projetos

### 1. Alarme (`Alarme/`)

Sistema de alarme digital com três estados de operação, controlado por controle remoto e sensores, implementado em SystemVerilog para a DE1-SoC.

#### Funcionamento

O sistema opera como uma **FSM de 3 estados** (`sb`, `alerta`, `disparo`) cadenciada pelo clock da placa. O usuário arma e desarma o alarme por meio de um controle remoto (`cr`). Quando armado, qualquer ativação dos sensores de movimento (`sm`), presença (`sp`) ou janela (`sj`) dispara a sirene. Um LED indica o estado atual com padrões de piscada distintos para cada modo.

#### Entradas e saídas

| Sinal | Direção | Descrição |
|---|---|---|
| `clk` | Entrada | Clock do sistema |
| `reset` | Entrada | Reset síncrono — retorna ao estado `sb` (desarmado) |
| `cr` | Entrada | Controle remoto — borda de subida alterna o estado armado/desarmado |
| `sm` | Entrada | Sensor de movimento |
| `sp` | Entrada | Sensor de presença |
| `sj` | Entrada | Sensor de janela |
| `sirene` | Saída | Ativa a sirene (nível alto = disparado) |
| `led` | Saída | LED de status com padrão de piscada dependente do estado |

#### Máquina de estados

| Estado | Descrição | Sirene | LED |
|---|---|---|---|
| `sb` (Stand-by) | Alarme desarmado | Desligada | Aceso fixo |
| `alerta` | Alarme armado, aguardando detecção | Desligada | Pisca a cada 5 ciclos de clock |
| `disparo` | Sensor ativado — alarme disparado | Ligada | Pisca a cada ciclo de clock |

**Transições:**
- `sb → alerta`: pulso no controle remoto (`cr`)
- `alerta → sb`: novo pulso no controle remoto
- `alerta → disparo`: qualquer sensor ativo (`sm`, `sp` ou `sj`)
- `disparo → sb`: pulso no controle remoto

#### Arquivos-fonte

| Arquivo | Módulo | Descrição |
|---|---|---|
| `alarmev1.sv` | `alarmev1` | **Módulo único do projeto.** Contém a FSM de estados (`sb / alerta / disparo`), a lógica de leitura do controle remoto com detecção de borda e auto-reset (`click` / `down_click`), as saídas combinacionais (`sirene`, `led`) e dois contadores independentes que geram os padrões de piscada do LED para os estados `alerta` (a cada 5 pulsos) e `disparo` (a cada pulso). |

---

### 2. Frequencímetro (`Frequencimetro/`)

Frequencímetro digital de 4 dígitos implementado em SystemVerilog para a DE1-SoC. Mede a frequência de um sinal externo e exibe o resultado em quatro displays de 7 segmentos.

#### Funcionamento

O sistema recebe um clock de 100 kHz (`clk_sistema_100k`) e um sinal a ser medido (`clk_desc`). A frequência é selecionada via chaves (`sel_sistema`, 3 bits), que determinam a janela de contagem. O resultado é exibido em BCD nos displays HEX da placa.

#### Arquivos-fonte

| Arquivo | Módulo | Descrição |
|---|---|---|
| `freq.sv` | `freq` | **Top-level do projeto.** Instancia e conecta todos os submódulos: divisores de clock, controle de temporização, contador BCD e decodificador de display. |
| `contDec.sv` | `contDec` | **Divisor de clock por 10.** A cada 10 pulsos de entrada, inverte o clock de saída — usado em cadeia para gerar os clocks de 10 kHz, 1 kHz, 100 Hz, 10 Hz e 1 Hz a partir de 100 kHz. |
| `contDec50.sv` | `contDec50` | **Divisor de clock por 500.** Variante do `contDec` que divide por 500, gerando pulsos mais lentos para outras finalidades de temporização. |
| `controle.sv` | `temp_controle` | **Máquina de estados de controle (6 estados).** Gera os sinais `limp` (limpar contadores), `hab` (habilitar contagem) e `arm` (armar/travar o display) de forma sequencial a cada ciclo de medição. |
| `mux.sv` | `mux_` | **Multiplexador 6:1.** Seleciona qual dos clocks divididos (100 kHz, 10 kHz, 1 kHz, 100 Hz, 10 Hz, 1 Hz) será usado como janela de medição, conforme `sel_sistema`. |
| `contBDC.sv` | `cont_BCD` | **Contador BCD de 4 dígitos (0000–9999).** Conta os pulsos do sinal medido enquanto `hab` está ativo; limpa ao receber `limp`; mantém valor ao receber `arm`. |
| `regDecodeDisplay.sv` | `reg_DecodeDisplay` | **Registrador + decodificador para display de 7 segmentos.** Trava o valor BCD no flanco de `arm` e converte cada dígito BCD (0–9) nos 7 bits do segmento correspondente. |
| `DE1_SOC_golden_top.v` | `DE1_SOC_golden_top` | **Wrapper da placa DE1-SoC (Terasic).** Declara todos os pinos físicos da placa e conecta o módulo `freq` às entradas de clock, chaves (SW) e displays HEX da DE1-SoC. |
| `Frequencimetro.qpf` / `.qsf` | — | Arquivos de projeto do Quartus Prime (configurações de compilação, atribuições de pinos). |

#### Hierarquia de módulos

```
DE1_SOC_golden_top
└── freq
    ├── contDec (×5)      → cadeia de divisão de clock
    ├── mux_              → seleção da janela de medição
    ├── temp_controle     → FSM de controle (limp / hab / arm)
    ├── cont_BCD          → contador BCD 4 dígitos
    └── reg_DecodeDisplay → registrador + decodificador 7 segmentos
```

---

### 3. Controlador ADC — LTC2308 (`VFSD_proj03/`)

Controlador SPI para o conversor analógico-digital **LTC2308** (12 bits) presente na DE1-SoC. Lê um canal analógico via protocolo SPI e exibe o valor convertido nos displays de 7 segmentos da placa.

#### Funcionamento

O módulo principal (`controle_adc`) gerencia o protocolo SPI: dispara a conversão via `convst`, transmite a palavra de configuração de 6 bits pelo barramento `SDI` e coleta os 12 bits de resultado pelo `SDO`. O clock do sistema é reduzido de 50 MHz para 1 kHz antes de acionar a lógica de amostragem, e o resultado hexadecimal é convertido para o display de 7 segmentos.

#### Arquivos-fonte

| Arquivo | Módulo | Descrição |
|---|---|---|
| `adc.sv` | `controle_adc` | **Top-level do controlador ADC.** Implementa a máquina de estados SPI: gera `convst` para disparar a conversão, alterna o `SCK`, serializa a palavra de configuração (6 bits) no `SDI` e desserializa os 12 bits de resultado do `SDO`. Expõe `dataout[11:0]` com o valor convertido. |
| `LTC_2308.sv` | `LTC2308_SPI` | **Modelo de referência / BFM do LTC2308.** Implementa a interface SPI do CI com máquina de estados (IDLE → START → TRANSFER → FINISH), gerenciando `cs`, `sclk`, `sdi` e `sdo`. Útil para simulação e verificação funcional. |
| `clk_1k.sv` | `clk_1k` | **Divisor de clock 50 MHz → 1 kHz.** Conta 25.000 ciclos do clock de 50 MHz da DE1-SoC e inverte o sinal de saída, produzindo um clock de 1 kHz para cadenciar o controlador ADC. |
| `convHexa7Seg.sv` | `convHexa7Seg` | **Conversor hexadecimal → 7 segmentos.** Decodifica um nibble (4 bits, 0x0–0xF) nos 7 bits de acionamento do display de catodo comum da DE1-SoC. Suporta todos os 16 símbolos hexadecimais. |
| `DE1_SOC_golden_top.v` | `DE1_SOC_golden_top` | **Wrapper da placa DE1-SoC (Terasic).** Declara os pinos físicos e conecta o módulo ADC e o decodificador de display aos periféricos da placa. |
| `adc.qpf` / `adc.qsf` | — | Arquivos de projeto do Quartus Prime (atribuições de pinos e configurações de síntese). |

#### Hierarquia de módulos

```
DE1_SOC_golden_top
├── clk_1k              → divisor 50 MHz → 1 kHz
├── controle_adc        → FSM SPI + coleta de dados do LTC2308
│   └── (LTC2308_SPI)  → modelo de referência para verificação
└── convHexa7Seg (×3)  → exibição hexadecimal nos displays HEX
```

---

## Como abrir e sintetizar

1. Instale o **Intel Quartus Prime** (versão compatível com Cyclone V).
2. Abra o arquivo `.qpf` correspondente ao projeto desejado.
3. Compile o projeto (**Processing → Start Compilation**).
4. Conecte a placa DE1-SoC via USB-Blaster e programe via **Programmer** usando o arquivo `.sof` gerado em `output_files/`.

---

## Estrutura do repositório

```
.
├── Alarme/                  # Projeto 1 — Sistema de Alarme
│   └── alarmev1.sv
├── Frequencimetro/          # Projeto 2 — Frequencímetro digital
│   └── Frequencimetro/
│       ├── freq.sv
│       ├── contDec.sv
│       ├── contDec50.sv
│       ├── controle.sv
│       ├── mux.sv
│       ├── contBDC.sv
│       ├── regDecodeDisplay.sv
│       ├── DE1_SOC_golden_top.v
│       └── Frequencimetro.qpf / .qsf
└── VFSD_proj03/             # Projeto 3 — Controlador ADC LTC2308
    ├── adc.sv
    ├── LTC_2308.sv
    ├── clk_1k.sv
    ├── convHexa7Seg.sv
    ├── DE1_SOC_golden_top.v
    └── adc.qpf / .qsf
```
