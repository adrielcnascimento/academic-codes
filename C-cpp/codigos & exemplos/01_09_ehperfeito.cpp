/*
 * Programa lê vários números inteiros positivos e verifica se cada inteiro é ou não perfeito.
 * O programa encerra se for informado um número zero ou negativo.
 * Um número é perfeito quando a soma de seus divisores é igual a duas vezes o próprio número.
 */

#include <stdio.h>
#include <stdlib.h>

int ehperfeito(int);       

main() {
    int inteiro;

    printf("Verifica se varios numeros sao ou nao perfeitos:\n\n");
    printf("Informe um numero inteiro positivo.\n");
    printf("Para parar, informe um inteiro zero ou negativo: ");
    scanf("%d", &inteiro);
    while (inteiro > 0) {
        printf("\nO numero %d %s eh perfeito!\n\n", inteiro, ehperfeito(inteiro) ? "" : "nao");
        printf("Informe um numero inteiro positivo.\n");
        printf("Para parar, informe um inteiro zero ou negativo: ");
        scanf("%d", &inteiro);
    }

    printf("\n");
    system("pause");
    return 0;
}

/* Função que verifica recursivamente se um numero inteiro positivo é perfeito */
/*int ehperfeito(int numero, int divisor) {
    int soma_divisores;
    
    if (divisor == 0)
       return 0;
    soma_divisores = ehperfeito(numero, divisor - 1);
    if (numero == divisor)
        return numero == soma_divisores ? 1 : 0; 
    return numero % divisor ? soma_divisores : divisor + soma_divisores;
}
*/

int ehperfeito(int numero) {
    int soma_divisores(int, int);
    
    return numero * 2 == soma_divisores (numero, numero) ? 1 : 0; 
}
/*
int soma_divisores(int num, int div) {
    
    if (div == 0)
        return 0;
    return num % div == 0 ? div + soma_divisores(num, div - 1) : soma_divisores(num, div - 1);                 
}      

*/
