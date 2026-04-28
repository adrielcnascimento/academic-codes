/* Alunos: Kenneth Fellipe(mat.: 20921432) / Cristovam Andre
   Lista: 5    Questao: 1
   
   Representacao de numeros complexos por uma classe complexo, e um programa
   para demonstrar.
*/

#include "Complexo.cpp"
#include "Complexo.h"
#include <iostream>

using namespace std;

int main()
{
  cout << "Programa que mostra operacoes com numeros complexos" << endl << endl;  
  Complexo comp1, comp2, comp3;
  
  double aux1, aux2;
  cout<<"\nEntre com o valor de \"A\" e \"B\" separados por espaco(complexo1): ";
  cin >> aux1 >> aux2;
  comp1.setAB(aux1, aux2);
  cout << "O complexo1: ";
  comp1.mostraComplexo();
  
  cout << "\nEntre com o valor de \"A\" e \"B\" separados por espaco(complexo2): ";
  cin >> aux1 >> aux2;
  comp2.setAB(aux1, aux2);
  cout << "O complexo2: ";
  comp2.mostraComplexo();

  cout << "\n\nSoma dos dois complexos:\t\t";
  comp3 = comp1.soma(comp2);
  comp3.mostraComplexo();

  cout << "Diferenca do complexo1 pelo complexo2:\t";
  comp3 = comp1.diferenca(comp2);
  comp3.mostraComplexo();

  cout << "Multiplicacao dos complexos:\t\t";
  comp3 = comp1.multiplicacao(comp2);
  comp3.mostraComplexo();

  
  cout << endl << endl;
  system("pause");
  
  return 0;
}
