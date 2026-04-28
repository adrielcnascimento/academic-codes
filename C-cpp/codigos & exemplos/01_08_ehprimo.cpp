/*
 * Programa lê vários números inteiros positivos e verifica se cada inteiro é ou não primo.
 * O programa encerra se for informado um número zero ou negativo.
 * Um número é primo quando só possui dois divisores, um e ele mesmo.
 */

#include <stdio.h>
#include <stdlib.h>

int ehprimo(int);       

main() {
    int inteiro;

    printf("Verifica se varios numeros sao ou nao primos:\n\n");
    printf("Informe um numero inteiro positivo.\n");
    printf("Para parar, informe um inteiro zero ou negativo: ");
    scanf("%d", &inteiro);
    while (inteiro > 0) {
        printf("\nO numero %d %s eh primo!\n\n", inteiro, ehprimo(inteiro) ? "" : "nao");
        printf("Informe um numero inteiro positivo.\n");
        printf("Para parar, informe um inteiro zero ou negativo: ");
        scanf("%d", &inteiro);
    }

    printf("\n");
    system("pause");
    return 0;
}

/* Função que verifica recursivamente se um numero inteiro positivo é primo */

/*int ehprimo(int numero, int divisor) {
    int conta_divisor;
    
    if (divisor == 0)
       return 0;
    conta_divisor = ehprimo(numero, divisor - 1);
    if (numero == divisor)
        return conta_divisor == 1 ? 1 : 0; 
    return numero % divisor ? conta_divisor : 1 + conta_divisor;
}
*/

int ehprimo(int numero) {
    int eh_primo_aux(int, int);
    
    return  eh_primo_aux(numero, numero/2) == 1 ? 1 : 0; 
}

int eh_primo_aux(int num, int div) {
    
    if (div <= 1)
        return div;
    return num % div == 0 ? 0 : eh_primo_aux (num, div - 1);
}
