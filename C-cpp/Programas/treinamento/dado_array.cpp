/*** Nelson Carlos de Sousa Campos, matrícula: 20821255                     ***/
/*** Introdução à Programação ==> Turma: 02, período: 2008.2                ***/
/* Faça um programa que simule N lançamentos de um dado (1 <= N <= 10000). O
programa mostra no final quantas ocorrências de cada possível resultado. Use um
array para contar as ocorrências */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 7

main()
{
      int lado, jogada, ocorrencia[TAMANHO] = {0};
      
      srand(time(NULL));
      
      for(jogada = 1; jogada <= 10000; jogada++){
          lado = rand() % 6 + 1;
          ++ocorrencia[lado];
      }
      printf("%s%15s\n", "Face", "Ocorrencia");
      
      for(lado = 1; lado <= TAMANHO - 1; lado++)
          printf("%3d%15d\n", lado, ocorrencia[lado]);
      printf("\n\n");
      system("pause");
      return 0;
}
