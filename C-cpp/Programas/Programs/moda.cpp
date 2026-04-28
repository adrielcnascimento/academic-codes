/* Este programa apresenta o tópico de análise de dados de pesquisas. Ele
calcula a média, a mediana e a moda dos dados */
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 99

void media(int []);
void mediana(int []);
void moda(int [], int []);
void Bolha(int []);
void imprimeArray(int []);

main()
{
      int frequencia[10] = {0},
      resposta[TAMANHO] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
                           7, 8, 9, 5, 9, 8, 7, 8, 7 ,8,
                           6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
                           7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
                           6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
                           7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                           5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
                           7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
                           7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
                           4, 5, 6, 1, 6, 5, 7, 8, 7};
      media(resposta);
      mediana(resposta);
      //moda(frequencia, resposta);
      //printf("\n\n");
      system("pause");
      return 0;
}
void media(int opiniao[])
{
     int j, total = 0;
     
     printf("%s\n%s\n%s\n", "********", "Media", "********");
     
     for(j = 0; j <= TAMANHO - 1; j++)
         total += opiniao[j];
     
     printf("A media e o valor medio dos itens de\n"
            "dados. A media e igual a soma de todos\n"
            "os itens de dados dividida pelo numero de\n"
            "itens de dados(%d). O valor medio para\n"
            "esse caso e: %d / %d = %.4f\n\n", TAMANHO, 
            total, TAMANHO,(float)total / TAMANHO);
}
void mediana(int opiniao[])
{
     printf("\n%s\n%s\n%s\n%s\n", "********", "Mediana", "********"
            "\n\nO array desordenado e:\n");
     
     imprimeArray(opiniao);
     printf("\n\nO array ordenado e:\n");
     Bolha(opiniao);
     imprimeArray(opiniao);
     printf("\n\nA mediana e o elemento %d do\n"
            "array ordenado de %d elemento(s).\n"
            "Para esse caso a mediana e %d\n\n", 
            TAMANHO / 2, TAMANHO, opiniao[TAMANHO / 2]);
}
void imprimeArray(int a[])
{
     int j;
     
     for(j = 0; j <= TAMANHO - 1; j++){
         if(j % 20 == 0)
             printf("\n");
         printf("%2d", a[j]);
     }
}
void Bolha(int a[])
{
     int passe, j, troca;
     
     for(passe = 1; passe <= TAMANHO - 1; passe++)
         for(j = 1; j <= TAMANHO - 2; j++){
               if(a[j] > a[j + 1]){
                   troca = a[j];
                   a[j] = a[j + 1];
                   a[j + 1] = troca;
               }
         }
}
     
            
                           
