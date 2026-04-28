#include <stdio.h>
#include <stdlib.h>

int eh_maiuscula (char);
int eh_minuscula (char);
void separa_letras (char []);

int main (void){
    int indice;
    char cadeia[1000], letra;
    
    printf ("Le uma cadeia de caracteres e mostra quantas vezes o resultado apareceram\n");
    printf ("Digite a string de ate 1000 caracteres:\n" );
    gets(cadeia);
    printf ("string lida eh: \n%s\n\n", cadeia);//teste para verificar se a string foi passada corretamente
    separa_letras(cadeia);
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
void separa_letras (char string []){
     int ind, cont_maiuscula = 0, cont_minuscula = 0, letras = 0;
    
     for (ind = 0; string[ind] != '\0'; ind++){
         letras ++;
        if (eh_maiuscula(string[ind]) && string [ind] != ' ')
           cont_maiuscula ++;
        if (eh_minuscula(string[ind]) && string [ind] != ' ')
           cont_minuscula ++;
     }
     printf ("O total de maiuscula foi = %d\n", cont_maiuscula);
     printf ("O total de minuscula foi = %d\n", cont_minuscula);
     printf ("O total de letras foi = %d\n", letras);
    return;
}
int eh_maiuscula (char letra){
    return letra >= 'A' && letra <= 'Z' ? 1 : 0;
}
int eh_minuscula (char letra){
    return letra >= 'a' && letra <= 'z' ? 1 : 0;
}
