/* Este programa apresenta o tópico de análise de dados de pesquisas. Ele
calcula a média, a mediana e a moda dos dados */
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 100

void media(int []);
void mediana(int []);
void moda(int [], int []);
void Bolha(int []);
void imprimeArray(int []);

main()
{
      int frequencia[10] = {0},
      resposta[TAMANHO] = {6, 7, 1, 9, 1, 7, 1, 9, 1, 9,
                           7, 8, 9, 5, 9, 8, 7, 8, 7 ,8,
                           6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
                           7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
                           6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
                           7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                           5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
                           7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
                           7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
                           4, 5, 6, 1, 6, 5, 7, 8, 7, 9};
      media(resposta);
      mediana(resposta);
      moda(frequencia, resposta);
      printf("\n\n");
      system("pause");
      return 0;
}
void media(int opiniao[])
{
     int j, total = 0;
     
     printf("\n%s\n%s\n%s\n\n", "********", "Media", "********");
     
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
     printf("\n%s\n%s\n%s\n%s\n", "********", "Mediana", "********",
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
         for(j = 0; j <= TAMANHO - 2; j++){
               if(a[j] > a[j + 1]){
                   troca = a[j];
                   a[j] = a[j + 1];
                   a[j + 1] = troca;
               }
         }
}
void moda(int freq[], int opiniao[])
{
     int nivel, j, h, maior = 0, maior2 = 0, valorModa = 0;
     printf("\n%s\n%s\n%s\n\n", "********", "Moda", "********");
     
     for(nivel = 1; nivel <= 9; nivel++)
         freq[nivel] = 0;
     
     for(j = 0; j <= TAMANHO - 1; j++)
         ++freq[opiniao[j]];
         
     printf("%s%11s%20s\n\n%54s\n%54s\n\n",
            "Resposta", "Frequencia", "Histograma",
            "1  1  2  2", "5  0  5  0  5");
     
     for(nivel = 1; nivel <= 9; nivel++){
         printf("%8d%11d                 ", nivel, freq[nivel]);
         if(freq[nivel] > maior){
             maior = freq[nivel];
             valorModa = nivel;
         }
         else if(freq[nivel] == maior)
             maior2 = freq[nivel];

     for(h = 1; h <= freq[nivel]; h++)
         printf("*");
         printf("\n");
     }
     printf("\n\nA moda e o valor mais frequente.\n"
            "Para esse caso a moda e %d que ocorreu %d vezes.\n", valorModa, maior);
     if(maior == maior2)
         printf("\n\nHouve um empate na moda.\n\n");
}
     

     
            
                           
