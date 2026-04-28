#include <iostream>
#include <cstdlib>
using namespace std;
 
int main (void){
    int a, b, c, opcao;
    cout <<"Digite o valor de A: ";
    cin >> a;
    cin.ignore();
    cout <<"Digite o valor de B: ";
    cin >> b;
    cin.ignore();
    c=a+b;
    cout <<"O resultado de A + B e "<<c<<"\n\n
\Deseja reiniciar o programa e realizar outro calculo?\n
\1. Sim\t2.Nao\n\n=> ";
    cin >> opcao;
    if (opcao==1)
        /* se '1' for digitado, a função MAIN chama
           a função MAIN, ou seja, reinicia o programa.*/
        main();
    else
        return EXIT_SUCCESS;
}