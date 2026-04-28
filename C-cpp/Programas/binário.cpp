/*Binário*/
#include <stdio.h>
#include <stdlib.h>
main(){
       int decimal, binario = 0;
       printf("Digite um decimal:\n");
       scanf("%d", &decimal);
       while(decimal > 0){
           binario = binario * 10 + decimal % 2;
           decimal /= 2;
       }
       printf("binario eh %d \n", binario);
       system("pause");
       return 0;
       }
           
