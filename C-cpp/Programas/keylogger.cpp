#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>

int main(void){
    int i;
    char word[100],wordTeste[50];

    FILE *txt;
    
    system ("Title Editor de arquivos .TXT\n");
    system ("color 0F");
    if((txt = fopen("Arquivo.txt", "a+")) == NULL){
      perror("Nada encontrado");
      exit(1);
    }
    while(word[0]!='-'){
         printf("\n\rDigite a string que quer salvar ou\nEntre com '-' para encerrar: ");
         fgets(word, 100, stdin);
         word[strlen(word) - 1] = '\0';
         fprintf(txt, "%s\n", word);
    }    
    
    fclose(txt);
    system("cls");
    fopen("Arquivo.txt", "a+");
    fscanf(txt,"%s",&wordTeste[0]);
    printf("\n\n%s",wordTeste);
    fclose(txt);
    printf ("\n\n\n");
    return 0;
}
