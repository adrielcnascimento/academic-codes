/*
   Programa lê vários pares de números inteiros positivos, calcula para
   cada par o mínimo múltiplo comum (MMC) e pára quando encontra negativo, pelo menos,
   um dos números do par.

   Cálculo do MMC(x,y) por adições sucessivas: O método supõe inicialmente que
   o MMC é  o valor de X, sendo que enquanto o MMC não divide exatamente Y, 
   o MMC deve ser aumentado de X. 
*/

#include <stdio.h>
#include <stdlib.h>

int mmc(int, int);       

main() {
    int num1, num2;

    printf("Calculo do MMC para vários pares de números positivos:\n\n");
    printf("Informe dois números inteiros positivos.\n");
    printf("Para parar, informe pelo menos um inteiro zero ou negativo: ");
    scanf("%d %d", &num1, &num2);
    while (num1 > 0 && num2 > 0) {
        printf("\nMMC = %d\n\n", mmc(num1, num2));
        printf("Informe dois números inteiros positivos.\n");
        printf("Para parar, informe pelo menos um inteiro zero ou negativo: ");
        scanf("%d %d", &num1, &num2);
    }

    printf("\n");
    system("pause");
    return 0;
}

/* Função MMC que ativa o processo recursivo - esconde o terceiro parâmetro da função mmc_aux */
int mmc(int inteiro1, int inteiro2) {
    int mmc_aux(int, int, int);
    
    return mmc_aux(inteiro1, inteiro2, inteiro1);
}

/* Função MMC auxiliar recursiva - usa chamadas sucessivas da própria função */
int mmc_aux(int numero1, int numero2, int numero1_aux) {
    if ((numero1 % numero2) == 0)
        return numero1;
    else
        return mmc_aux(numero1 + numero1_aux, numero2, numero1_aux);
}


/* Função MMC iterativa - usa repetições
int mmc(int inteiro1, int inteiro2) {
    int mmc;
    
    mmc = inteiro1;
    while (mmc % inteiro2 != 0)
        mmc += inteiro1;
        
    return mmc;
}
*/

