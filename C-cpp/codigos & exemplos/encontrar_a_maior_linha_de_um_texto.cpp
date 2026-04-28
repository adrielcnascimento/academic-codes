#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define MAXLINHA 85

int main(void) {
     char linha[MAXLINHA];
     char maiorLinha[MAXLINHA];
     int tamLinha, maior;
     
     maior = INT_MIN;
     printf  ("Digite o seu texto: \n");
     gets(linha); 

     while((tamLinha = strlen(linha)) > 0) {
         if(tamLinha > maior) {
              maior = tamLinha;
              strcpy(maiorLinha, linha);
         }
         gets(linha);
     }
     printf ("Maior linha do texto: %s", maiorLinha);
     printf ("\n\n\n");
     system ("pause");
     return 0;
}
