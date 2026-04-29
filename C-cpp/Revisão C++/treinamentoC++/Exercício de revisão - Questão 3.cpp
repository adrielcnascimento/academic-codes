#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	
	int escolha, numero, soma;
	
	printf ("PARA PAR DIGITE 0, PARA ESCOLHER IMPAR DIGITE 1: ");
	scanf ("%d", &escolha);
	
	printf ("\nEscolha um numero:\n");
	scanf ("%d", &numero);
	
	soma = numero + rand();
	
	printf("%d", soma);

	if((soma%2)==escolha)
		printf ("\n\nVoce venceu!");
	else
		printf ("\n\nVoce perdeu!");
	
	getch();
	return 0;
}
