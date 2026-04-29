#include <stdio.h>
#include <conio.h>
#define TAM 2

void recebe (float [TAM][TAM]);
void imprime (float [TAM][TAM]);
void transposta (float [TAM][TAM]);
void soma (float [TAM][TAM], float [TAM][TAM]);

main(){
	
	float matriz1[TAM][TAM], matriz2[TAM][TAM];
	int cont1, cont2;
	
	recebe(matriz1);
	//transposta(matriz1);
	//imprime (matriz1);
	recebe (matriz2);
	
	soma(matriz1, matriz2);
	
	getch();
	return 0;	
}

void recebe (float array[TAM][TAM]){
	int flag1, flag2;
	for (flag1 = 0; flag1 < TAM; flag1++){
		for (flag2 = 0; flag2 < TAM; flag2++)
			scanf("%f", &array[flag1][flag2]);
	}
	printf("\n");
}

void imprime (float array[TAM][TAM]){
	int flag1, flag2;
	
	for (flag1 = 0; flag1 < TAM; flag1++){
		for (flag2 = 0; flag2 < TAM; flag2++)
			printf("%.2f\t", array[flag1][flag2]);
	if(flag2==TAM)
		printf("\n");
	}
	printf("\n");
}

void transposta (float array[TAM][TAM]){
	int flag1, flag2;
	float array_flag[TAM][TAM];
	
	for (flag1 = 0; flag1 < TAM; flag1++){
		for (flag2 = 0; flag2 < TAM; flag2++){
			array_flag[flag1][flag2] = array[flag2][flag1];
			printf("%.2f\t", array_flag[flag1][flag2]);
		}
	if(flag2==TAM)
		printf("\n");
	}
	printf("\n");;
}

void soma (float array1[TAM][TAM], float array2[TAM][TAM]){
	int flag1, flag2;
	float soma;
	
	for (flag1 = 0; flag1 < TAM; flag1++){
		for (flag2 = 0; flag2 < TAM; flag2++){
			soma = array1[flag1][flag2] + array2[flag1][flag2];
			printf ("A soma dos elementos A[%d][%d] e B[%d][%d] vale %.2f\n", flag1+1, flag2+1, flag1+1, flag2+1, soma);
		}
	}
}


