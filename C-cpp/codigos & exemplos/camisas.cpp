#include <stdio.h>
#include <stdlib.h>
int main ( ) {
	 int valor;
	 
	 printf ("A camisa vale a pena ?\n");
	 printf ("merece ser feita? \n");
	 
	 
	 do{
	 	 printf ("Entre com os valores 1 para sim e 2 para nao");
	 	 scanf ("%d", &valor);
		  if (valor < 1 || valor > 2)
	 	 	 printf ("escolha invalida seu burro!!!\n");	 	 
	 }while (valor < 1 || valor > 2);
	 
	 if (valor == 1)
	 	 printf ("Eba, vamos fazer isso logo!\n");
	 else printf ("que pena, mas valeu a intecao. \n");
	 
	 printf ("\n\n\n");
	 system ("pause");
	 return 0;
}
