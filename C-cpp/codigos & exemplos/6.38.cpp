#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 100

void inverte_string (char []);

int main (void){
    int ind;
    char array_string [TAM_MAX];
    
    printf ("programa que le uma string e informa ela invertida\n");
    printf ("informe a string de no maximo %d caracteres \n", TAM_MAX);
    gets (array_string);    
    inverte_string (array_string);
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

void inverte_string (char cadeia_caracteres []){
     int indice, cont = 0;
     for (indice = 0; cadeia_caracteres[indice] != '\0'; indice ++)
         cont ++;
     for (indice = cont; indice != '\0'; indice --)
         printf ("%c", cadeia_caracteres[indice]);
     return ;
}
