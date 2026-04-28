/*** Nelson Carlos de Sousa Campos, matrícula: 20821255                     ***/
/*** Introdução à programação, turma 02                                     ***/
/*** Faça um programa que leia 20 números inteiros numa ordem qualquer      ***/
/*** e os mostre em ordem crescente                                         ***/
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 20
main()
{
      int numero[TAMANHO], indice, troca, passe;
      
      printf("\t\t----------------------\n");
      printf("\t\t-   ordena numeros   -\n");
      printf("\t\t----------------------\n");
      printf("Digite 20 numeros em qualquer ordem e este programa\n");
      printf("ordenara estes numeros em ordem crescente\n\n");
      
      for(indice = 0; indice <= TAMANHO - 1; indice++)
          scanf("%d", &numero[indice]);
      
      printf("numeros impressos na ordem original:\n");
      for(indice = 0; indice <= TAMANHO - 1; indice++)
          printf("%3d", numero[indice]);
      
      printf("\n");
      for(passe = 1; passe <= TAMANHO - 1; passe++){
          for(indice = 0; indice <= TAMANHO - 2; indice++){
              if(numero[indice] > numero[indice + 1]){
                  troca = numero[indice];
                  numero[indice] = numero[indice + 1];
                  numero[indice + 1] = troca;
              }
          }
      }
      printf("\nnumeros impressos na ordem crescente:\n");
      for(indice = 0; indice <= TAMANHO - 1; indice++)
          printf("%3d", numero[indice]);
      
      printf("\n\n");
      
      printf("----------------------\n");
      printf("-   fim de execucao  -\n");
      printf("----------------------\n");
      system("pause");
      return 0;
}        
      
