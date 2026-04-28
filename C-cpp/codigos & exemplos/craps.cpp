#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanca_dados(void);

int main() {
    int ponto, resultado, ganhador = 0, conta_rodadas = 0;
    
    printf("Simula o lancamento de um dado:\n\n");
    srand(time(NULL));
    
    ponto = lanca_dados();
    printf("%da. rodada: ponto = %d\n", ++conta_rodadas, ponto);
    if (ponto == 7 || ponto == 11)
        ganhador = 1;
    else if (ponto == 2 || ponto == 3 || ponto == 12)
             ganhador = 2;
    while (ganhador == 0) {
        resultado = lanca_dados();
        printf("%da. rodada: resultado = %d\n",
               ++conta_rodadas, resultado);
        if (resultado == ponto)
           ganhador = 1;
        else if (resultado == 7)
            ganhador = 2;
    }
    if (ganhador == 1)
        printf("Jogador foi o ganhador!\n");
    else
        printf("Banca foi a ganhadora!\n");
    
    printf("\n\n");
    system("pause");
    return 0;
}

int lanca_dados(void) {
    int dado1, dado2;
    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    return dado1 + dado2;
}
