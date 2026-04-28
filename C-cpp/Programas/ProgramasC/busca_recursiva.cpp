#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100
void le_array(int[], int);
int procura(int[], int, int);

main()
{
      int array[TAMANHO], n, valor, posicao;
      
      printf("Digite o tamanho do array:\n");
      scanf("%d", &n);
      
      printf("Digite os elementos do array:\n");
      le_array(array, n);
      
      printf("Digite o numero procurado ");
      scanf("%d", &valor);
      if((posicao = procura(array,n , valor )) == -1 )
          printf("Numero nao encontrado\n");
      else
          printf("numero encontrado na posicao %d do array!\n", posicao);
      
      system("pause");
      return 0;
}
void le_array(int array[], int n)
{
     int indice;
     for(indice = 0; indice < n; indice++)
         scanf("%d", &array[indice]);
     return;
} 
int procura(int array[], int n, int procurado)
{
     int indice;
     for(indice = 0; indice < n; indice++)
         if(procurado == array[indice])
             return indice;
     return -1;
}
         
     
