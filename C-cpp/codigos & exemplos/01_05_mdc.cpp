/*
   Programa lê vários pares de números inteiros positivos, calcula para
   cada par o máximo divisor comum (MDC) e pára quando encontra negativo, pelo menos,
   um dos números do par.

   Cálculo do MDC pelo Método de Euclides: consiste em se efetuar divisões 
   sucessivas até obter resto zero, sendo que, enquanto isso não acontece, 
   o próximo dividendo é o divisor anterior e o próximo divisor é o resto 
   da divisão anterior. Quando o resto é zero o MDC é o último divisor.
*/

#include <stdio.h>
#include <stdlib.h>

int mdc(int, int);       

main() {
    int num1, num2;

    printf("Calculo do MDC para vários pares de números positivos:\n\n");
    printf("Informe dois números inteiros positivos.\n");
    printf("Para parar, informe pelo menos um inteiro zero ou negativo: ");
    scanf("%d %d", &num1, &num2);
    while (num1 > 0 && num2 > 0) {
        printf("\nMDC = %d\n\n", mdc(num1, num2));
        printf("Informe dois números inteiros positivos.\n");
        printf("Para parar, informe pelo menos um inteiro zero ou negativo: ");
        scanf("%d %d", &num1, &num2);
    }

    printf("\n");
    system("pause");
    return 0;
}

/* Função MDC recursiva - função chama a si própria */
int mdc(int x, int y) {
    if (x % y == 0)
       return y;
    else
       return mdc(y, x % y);
}

/* Função MDC iterativa - processo utiliza repetições
int mdc(int dividendo, int divisor) {
    int resto;
    
    resto = dividendo % divisor;
    while (resto != 0) {
        dividendo = divisor;
        divisor = resto;
        resto = dividendo % divisor;
    }
    return divisor;
}
*/

