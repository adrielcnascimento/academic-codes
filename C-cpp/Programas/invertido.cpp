/*Número invertido*/
#include <stdio.h>
#include <stdlib.h>
main(){
       int inteiro, invertido = 0, digito;
       printf("Digite um inteiro:\n");
       scanf("%d", &inteiro);
       while(inteiro > 0){
           digito = inteiro % 10;
           invertido = invertido * 10 + digito;
           inteiro /= 10;
       }
       printf("invertido eh: %d\n", invertido);
       system("pause");
       return 0;
       }
           
