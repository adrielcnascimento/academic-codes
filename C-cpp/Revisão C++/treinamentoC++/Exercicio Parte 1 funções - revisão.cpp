#include <stdio.h>
#include <math.h>
#define QUANTIDADE 4

void get_medidas(float [QUANTIDADE]);
void imprime_medidas(float [QUANTIDADE]);
float calcula_media(float [QUANTIDADE]);
float somatorio(float [QUANTIDADE],float);
float quadrado(float);

main(){
	
	float xi[QUANTIDADE];
	float desvio, xm, z;
	
	get_medidas(xi);
	xm = calcula_media(xi);
	
	z = somatorio(xi,xm);
	desvio = sqrt(z/QUANTIDADE);
	
	imprime_medidas(xi);
	printf("\n\nO desvio padrao das medidas eh: %f", desvio);
	
	return 0;	
}

void get_medidas(float input1[QUANTIDADE]){
	
	int cont;
	
	for(cont=0;cont<QUANTIDADE;cont++){
		printf ("Digite o valor da medida %d: ", cont+1);
		scanf ("%f", &input1[cont]);
	}
}

void imprime_medidas(float input2[QUANTIDADE]){
	
	int cont;
	
	for(cont=0;cont<QUANTIDADE;cont++){
		printf ("\nO valor da medida %d eh: %f", cont+1, input2[cont]);
	}
}

float calcula_media(float input3[QUANTIDADE]){
	
	int cont;
	float media = 0;
	
	for(cont=0;cont<QUANTIDADE;cont++){
		media = media + input3[cont]/QUANTIDADE;
	}
	return media;
}
float somatorio(float input4[QUANTIDADE],float med)	{
	
	int cont;
	float desvio1;
	float soma=0;
	
	for(cont=0;cont<QUANTIDADE;cont++){
		desvio1 = input4[cont]-med;
		soma = soma + quadrado(desvio1);
	}
	return soma;
}
float quadrado(float input5){
	return input5*input5;
}
