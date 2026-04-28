#include <stdio.h>
#include <stdlib.h>

int eh_maiusculo (char);
int eh_minisculo (char);

int main (void){
    char cadeia [] = {0}, letras;
    int indice;
    
    printf ("le uma cadeia de caracteres e mostra a ocorrencia de cada letra\n");
    printf ("digite a string: \n");
    
    gets(letras);
    for (indice = 0; indice != '\0' ; indice ++){
        printf ("%c\n", cadeia[indice]);
        letras = cadeia[indice];
        eh_maiusculo (letras);
        eh_minisculo (letras);
    }
    cadeia = '\0';
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

int eh_maiusculo (char letra){
    return letra >= 'A' && letra <= 'Z' ? 1 : 0;
}
int eh_minisculo (char){
    return letra >= 'a' && letra <= 'z' ? 1 : 0;
}
