#include <stdio.h>
#include <string.h>

main(){
	
	char string[10], caractere;
	int i=0;
	
	gets(string);
	scanf ("%c", &caractere);
	
	while (string[i++]!=caractere)
	{
		if(i==50)
				break;
	}
	if (i == 50)
		printf("A string nao possui o caractere %c", caractere);
	
	else
		printf("A primeira ocorrencia do caractere %c eh na posicao %d", caractere, i);
	
	return 0;
}
