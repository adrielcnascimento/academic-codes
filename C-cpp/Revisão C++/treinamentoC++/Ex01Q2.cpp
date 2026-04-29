/** Aluno: 
*   Lista: 1    Questao: 2 
*   Classe Elevador para armazenar informacoes relativas a um elevador de 
*   passageiros instalado no interior de um edifício.
*

**/
#include <stdlib.h>
#include <stdlib.h>

class Elevador{
      private:
         int capacidadeElevador;
         int totalAndares;
         int andarAtual;
         int passageirosNoElevador;
      public:
         void iniciaElevador(int, int);
         void entraElevador();
         void saiElevador();
         void sobeUmAndar();
         void desceUmAndar();
         //getters
         int getCapacidadeElevador();
         int getTotalAndares();
         int getAndarAtual();
         int getPassageirosNoElevador();
};

void Elevador::iniciaElevador(int _capacidadeElevador, int _totalAndares){
     capacidadeElevador = _capacidadeElevador;
     totalAndares = _totalAndares;
}

void Elevador::entraElevador(){
     passageirosNoElevador += (passageirosNoElevador == capacidadeElevador ? 0 : 1);
}

void Elevador::saiElevador(){
     passageirosNoElevador -= (passageirosNoElevador == 0 ? 0 : 1);
}
     
void Elevador::sobeUmAndar(){
     andarAtual += (andarAtual == totalAndares ? 0 : 1); 
}
     
void Elevador::desceUmAndar(){
     andarAtual -= (andarAtual == 0 ? 0 : 1);     
}

int Elevador::getCapacidadeElevador(){
    return capacidadeElevador; 
}

int Elevador::getTotalAndares(){
    return totalAndares;
}

int Elevador::getAndarAtual(){
    return andarAtual;
}

int Elevador::getPassageirosNoElevador(){
    return passageirosNoElevador;
}
