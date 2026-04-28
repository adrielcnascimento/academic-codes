/*** Este programa calcula a soma dos fatoriais de dois números naturais    ***/

#include <stdio.h>
#include <stdlib.h>

/*Protótipo da Função Fatorial*/

int fatorial (int);

main(){
   
   int numero1, numero2;
   
   printf("Digite dois numeros naturais:\n");
   scanf("%d%d", &numero1, &numero2);
   
   printf("A soma dos fatoriais dos dois numeros eh %d\n\n", fatorial(numero1) + fatorial(numero2));
   
   system("pause");
   
   return 0;
}
/*** Definição da função fatorial ***/
int fatorial(int numero){
    int fatorial, fator;
    fatorial = 1;
    for(fator = 1; fator <= numero; fator++)
        fatorial *= fator;
    return fatorial;
}
        
