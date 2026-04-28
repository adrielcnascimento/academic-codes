#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void bubble_sort(int array[], int tamanho_array);
void mostra_array(int array[], int tamanho_array);

int main(void){
    int a[TAM] = { 6, 4, 4, 2, 7, 5, 1, 8, 15, 12 };
    
    printf ("Ordena array usando a classificacao por bolhas (bubble sort)\n");
    bubble_sort(a, TAM);
    printf ("\n\n\n");
    system ("pause");
    return 0;

}
void bubble_sort(int array[], int tamanho) {
    int pass, indice, maior, vez;
    
    printf("\nO Array antes de ser classificado\n");
         
	for (pass = 1; pass < tamanho; pass++){
	     vez = 0;
         mostra_array(array, tamanho);
         printf("\n\nordenando o array\n");
       for (indice = 0; indice < tamanho - pass; indice++) {
	 	   if (array[indice] > array[indice + 1]) {
		   maior = array[indice];
	       array[indice] = array[indice + 1];
		   array[indice + 1] = maior;
		   mostra_array(array, tamanho);
		   vez = 1;
		   }
	   } 
  }
   printf ("O array ordenado eh:\n");
   mostra_array (array, tamanho);
    return ;
}

void mostra_array(int array[], int tamanho_array){
     int posicao;
	 for (posicao = 0; posicao < tamanho_array; posicao++)
	      printf("%d ", array[posicao]);
	 printf("\n");
	 return ;
}


