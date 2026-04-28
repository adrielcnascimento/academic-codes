#include <iostream>

using namespace std;

class Aluno{
      private:
              float notas[3];
      public:
             void recebeNotas();
             void verificAprovacao();
             Aluno(){
             notas[0] = 0;         
             }
};
void Aluno:: recebeNotas()
{
     for(int i = 0; i < 3; i++){
         cout<<"Digite a " <<i + 1 <<"a nota do aluno ";
         cin>> notas[i];
     }
}
void Aluno:: verificAprovacao()
{
     float soma = 0, media;
     
     for(int i = 0; i < 3; i++)
         soma += notas[i];
     
     media = soma / 3;
     cout<<"Media = " <<media << endl;
     if(media >= 5 )
         cout<<"Aluno Aprovado!!!\n";
     else
         cout<<"Aluno Reprovado!!!\n";
}
void menu();             
main()
{
      int opcao;
      Aluno estudante;
      
      do{
         system("cls");
         menu();
         cin>> opcao;
         switch(opcao){
             case 1:
                  estudante.recebeNotas();
                  system("pause");
                  break;
             case 2:
                  estudante.verificAprovacao();
                  system("pause");
                  break;
             default:
                 break;
         }
      }while(opcao != 3);
      system("pause");
}
void menu()
{
     cout<<"Digite:\n";
     cout<<"1 - para preencher as notas dos estudantes";
     cout<<"\n2 - para verificar a aprovacao dos estudantes";
     cout<<"\n3 - para sair\n";
     cout <<"Digite uma opcao: ";
}
