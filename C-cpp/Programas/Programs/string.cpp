#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 20
void separa_string(char []);
int tamanho_string(char []);
main()
{
      char string[TAM_MAX];
            
      printf("Entre com uma string: ");
      gets(string);
      printf("String lida: %s\n", string);
      separa_string(string);
      printf("\n");
      printf("Tamanho da sting e: %d\n",tamanho_string(string));
      printf("\n");
      system("pause");
      return 0;
}
void separa_string(char string[])
{
     int i;
     for(i = 0; string[i] != '\0'; i++)
         printf("%c ", string[i]);
}
int tamanho_string(char string[]){
    int i;
    for(i = 0; string[i] != '\0'; i++);
    
    return i;
}
    
       
