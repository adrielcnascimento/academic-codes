#include <stdio.h>
#include <conio.h>
#define TAM 6

void recebe (int [TAM]);
void imprime (int [TAM]);
void bubblesort (int [TAM]);

main(){
	
	int array [TAM], i;
	
	recebe (array);
	
	bubblesort(array);
	
	printf("\n");
	
	imprime(array);
	
	getch();
	return 0;
}

void recebe ( int vetor [TAM]){
	int flag1;
	
	for (flag1=0; flag1<TAM; flag1++){
		scanf("%d", &vetor[flag1]);
	}	
}

void imprime (int vetor [TAM]){
	int flag1;
	
	for (flag1=0; flag1<TAM; flag1++){
		printf("%d\t", vetor[flag1]);
	}
	if(flag1==TAM)
	printf("\n");
}

void bubblesort( int vetor[TAM] )
{
  int flag1, flag2, auxiliar;
  int flag3 = TAM - 1;
  
  for(flag1 = 0; flag1 < TAM; flag1++)
  {
     for(flag2 = 0; flag2 < flag3; flag2++)
     {
        if(vetor[flag2] > vetor[flag2+1])
        {
            auxiliar = vetor[flag2];
        	vetor[flag2] = vetor[flag2+1];
        	vetor[flag2+1]=auxiliar;
        }
     }
     flag3--;
  }
}
