#include <stdio.h>
#include <math.h>
#define QUANTIDADE 4

void le_conjunto(float [QUANTIDADE]);
void imprime_conjunto(float [QUANTIDADE]);
float somatorio(float [QUANTIDADE]);
float menor_elemento(float [QUANTIDADE]);
int quant_impares(float [QUANTIDADE]);
main(){
	
	float c1[QUANTIDADE], c2[QUANTIDADE];
	float desvio, xm, z;
	
	le_conjunto(c1);
	le_conjunto(c2);
	
	imprime_conjunto(c1);
	printf("\nA soma dos elementos do conjunto 1 vale %f", somatorio(c1));
	printf("\nO menor elemento do conjunto 1 eh %f", menor_elemento(c1));
	printf("\nA quantidade de numeros impares no conjunto  eh: %d\n\n", quant_impares(c1));
	
	imprime_conjunto(c2);
	printf("\nA soma dos elementos do conjunto 2 vale %f", somatorio(c2));
	printf("\nO menor elemento do conjunto 2 eh %f", menor_elemento(c2));
	printf("\nA quantidade de numeros impares no conjunto  eh: %d", quant_impares(c2));
	
	return 0;	
}

void le_conjunto(float input[QUANTIDADE]){
	
	int cont;
	
	for(cont=0;cont<QUANTIDADE;cont++){
		printf ("Digite o valor da medida %d: ", cont+1);
		scanf ("%f", &input[cont]);
	}
}

void imprime_conjunto(float input[QUANTIDADE]){
	
	int cont;
	
	for(cont=0;cont<QUANTIDADE;cont++){
		printf ("\nO valor da medida %d eh: %f", cont+1, input[cont]);
	}
}

float somatorio(float input[QUANTIDADE])	{
	
	int cont;
	float soma=0;
	
	for(cont=0;cont<QUANTIDADE;cont++){
		soma = soma + input[cont];
	}
	return soma;
}

float menor_elemento(float input[QUANTIDADE]){
	
	int cont;
	float aux;
	
	aux = input[0];
	
	for(cont=0;cont<QUANTIDADE;cont++){
		if(aux>input[cont])
		aux = input[cont];		
	}
	return aux;
}

int quant_impares(float input[QUANTIDADE]){
	int cont, resto;
	float aux=0;
	
	for(cont=0;cont<QUANTIDADE;cont++){
		resto = (int)input[cont]%2;
		if(resto)
		++aux;
	}
	return aux;
}
