#include <iostream>
#define TANQUE 50

using namespace std;

class Carro{
      private:
              float tanque;
              float kilometragem;
              int passageiros;
      public:
             Carro()
             {
             tanque = kilometragem = passageiros = 0;
             } 
             void abasteceCarro(float);
             void anda(void);
             void inserePassageiro(int);
             void retiraPassageiro(int);
};
void Carro:: abasteceCarro(float combustivel)
{
     tanque += combustivel;
     if(tanque > TANQUE)
         tanque = TANQUE;
}
void Carro:: anda(void)
{
     float km;
     cout<<"Quantos kilometros o carro vai andar? ";
     cin>> km;
     kilometragem += km;
}
void Carro:: inserePassageiro(int pessoa)
{
     passageiros += pessoa;
     if(passageiros >= 5){
         cout <<"O carro esta cheio!" <<endl;
         passageiros = 5;
     }
}
void Carro:: retiraPassageiro(int pessoa)
{
     passageiros -= pessoa;
     if(passageiros <= 0){
         cout <<"O carro esta vazio!" <<endl;
         passageiros = 0;
     }
}

main()
{
      Carro carro1;
      carro1.anda();
      carro1.inserePassageiro(5);
      carro1.retiraPassageiro(3);
      system("pause");
}
          
      
      
