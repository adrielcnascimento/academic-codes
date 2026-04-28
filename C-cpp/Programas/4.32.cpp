/*Binário*/
#include <stdio.h>
#include <stdlib.h>
main(){
       int decimal, binario = 0, digito, octal, hexadecimal;
       while(decimal > 0){
               digito = decimal % 2;
               binario = binario * 10 + digito;
               decimal /= 2;
           }
       for(decimal = 0; decimal <= 10; decimal++){
           printf("%d\t %d\t %o\t %x\n", decimal, binario, decimal, decimal);
           
       }    
       system("pause");
       return 0;
       }
           
