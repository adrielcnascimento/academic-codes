# include <stdio.h>
#include <stdlib.h>
 
int main()
{
  int a;
 
  printf("Gerando Tabela ASCII, posi%coes de 32 a 126\n\n",135);
 
 a = 12;
 
  do{
       printf("N%c %d: Caracter %c\n\n",248,a,a);
       a++;
  }while(a<=126);
  
  system ("pause");
  return 0;
}
