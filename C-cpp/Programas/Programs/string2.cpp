#include <stdio.h>
#include <stdlib.h>

int tamanho_string(char[]);
main()
{
      char string[10];
      
      printf("Digite uma string: ");
      gets(string);
      printf("\n");
      printf("Tamanho da string e: %d", tamanho_string(string));
      printf("\n");
      system("pause");
      return 0;
}
int tamanho_string(char string[])
{
    int i;
    
    for(i = 0; string[i] != '\0'; i++)
    
    return i;
}
