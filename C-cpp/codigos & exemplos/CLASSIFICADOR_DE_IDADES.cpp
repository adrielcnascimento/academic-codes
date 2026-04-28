/*CLASSIFICA IDADE*/
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
	 int idade;
	 
	 printf ("Classifica idade \n");
	 printf ("entre com o valor da idade em anos: \n");
	 scanf ("%d", &idade);
	 
	 if (idade >= 5 && idade <=7)
	 	 printf ("Ele vai para o infantil A");
	 if (idade > 7 && idade < 10)
	 	 printf ("Ele vai para o infantil B");
	 if (idade >= 10 && idade < 13)
	 	 printf ("Ele vai para o juvenil A");
	 if (idade >= 13 && idade < 14)
	 	 printf ("Ele vai para o juvenil B");	
	 
	 printf ("\n\n\n");
	 system ("pause");
	 return 0;
}
