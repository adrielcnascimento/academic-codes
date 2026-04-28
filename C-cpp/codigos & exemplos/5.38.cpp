/*FIBONACCI NÃO RECURSIVO*/
#include <stdio.h>
#include <stdlib.h>

double fibonacci (double);

int main ( ) {
    double valor;
    
    printf ("Programa que calcula a sequencia de fibonacci\n");
    printf ("Digite o valor de parada: ");
    scanf  ("%lf", &valor);
    
    printf ("O valor %.2f corresponde ao valor %lf da sequencia de fibonacci\n", valor, fibonacci(valor));
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
double fibonacci (double n){
       double ultimo = 0, penultimo = 1, atual, limite;
       
       for (limite = 2; limite <= n; limite ++){
            ultimo = penultimo;
            penultimo = atual;
            atual = ultimo + penultimo;
       }
       return atual;
}
