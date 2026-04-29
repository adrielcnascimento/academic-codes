#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define bitsword 32
#define bitsbyte 8
#define bytesword 4
#define R (1 << bitsbyte)
#define digit(A, B) (((A) >> (bitsword-((B)+1)*bitsbyte)) & (R-1))
#define bin(A) l+count[A]
#define maxN 1000

typedef int Item;
static Item aux[maxN];
void insere1(int matriz5[5][5]);
void insere2(int matriz7[7][7]);
void insere3(int matriz9[9][9]);
void ordena1(int matriz5[5][5]);
void ordena2(int matriz7[7][7]);
void ordena3(int matriz9[9][9]); 
void radixLSD(Item a[], int l, int r); 
main() {
      int ok1=0,ok2=0,ok3=0,opcao,matriz5[5][5],matriz7[7][7],matriz9[9][9];
      int s;
      for(;;){
         do {
           //inserir os elementos da matriz
           printf("\nDigite:\n");
           printf("1 - Para inserir os elementos da matriz 5x5\n");
           printf("2 - Para inserir os elementos da matriz 7x7\n");
           printf("3 - Para inserir os elementos da matriz 9x9\n");
           //ordenar os elementos da matriz         
           printf("4 - ordenar crescente os elementos da matriz 5x5\n");
           printf("5 - ordenar crescente os elementos da matriz 7x7\n");
           printf("6 - ordenar crescente os elementos da matriz 9x9\n");
           //sair
           printf("0 - Para sair\n");
   		   scanf("%d",&opcao);
          }while(opcao!=1 && opcao!=2&& opcao!=3&&opcao!=4&&opcao!=5&& opcao!=6&& opcao!=0);        
 
         //opcoes
         switch(opcao){
              //Povoamento da matriz
              case 1: 
                   insere1(matriz5);                       
                   ok1=1;
                   break;
              case 2:
                   insere2(matriz7);   
                   ok2=1;
                   break;  
              case 3:
                   insere3(matriz9);   
                   ok3=1;
                   break; 
              
              //Ordenação da matriz
              case 4:
                   if (ok1==1) {
                          printf("\n\nOrdenando...\n\n");
                          ordena1(matriz5);
                   }
                   else {
                        printf("\nInsira primeiro a matriz 5x5\n");
                   }
                   break;                
               case 5:
                   if (ok2==1) {
                          printf("\n\nOrdenando...\n\n");
                          ordena2(matriz7);
                   }
                   else {
                        printf("\nInsira primeiro a matriz 7x7\n");
                   }
                   break;
               case 6:
                   if (ok3==1) {
                          printf("\n\nOrdenando...\n\n");
                          ordena3(matriz9);
                   }
                   else {
                        printf("\nInsira primeiro a matriz 9x9\n");
                   }
                   break;      
                case 0:
                    printf("Pressione qualquer tecla para feixar...");  
                    getch();
                    exit (0);
                    break;            
         }
    }
}   
/////////////////////////////////////////////////////////////////////////
//inserindo na matriz 5x5
void insere1(int matriz5[5][5]) {
     int i,j;
     printf("\nDigite o: \n");
     for(i=0;i<5;i++) {
                      for(j=0;j<5;j++) {
                                       printf("Elemento[%d][%d] :",i,j);
                                       scanf("%d",&matriz5[i][j]);
                                       }
                      }
}        
//inserindo na matriz 7x7
void insere2(int matriz7[7][7]) {
     int i,j;
     printf("\nDigite o: \n");
     for(i=0;i<7;i++) {
                      for(j=0;j<7;j++) {
                                       printf("Elemento[%d][%d] :",i,j);
                                       scanf("%d",&matriz7[i][j]);
                                       }
                      }
}        
//inserindo na matriz 9x9
void insere3(int matriz9[9][9]) {
     int i,j;
     printf("\nDigite o: \n");
     for(i=0;i<9;i++) {
                      for(j=0;j<9;j++) {
                                       printf("Elemento[%d][%d] :",i,j);
                                       scanf("%d",&matriz9[i][j]);
                                       }
                      }
}        
////////////////////////////////////////////////////////////////////////////         
//Ordenado a matriz 5x5
void ordena1(int matriz5[5][5]) {
     int i,j,k=0;
     int l=0,r=24;
     Item a[25];
     for (i=0;i<5;i++) {
         for(j=0;j<5;j++) {
                          //transformando a matriz 5x5 em uma linear
                          a[k] = matriz5[i][j];
                          k++;
                          }
     }
     //ordenado
     radixLSD(a,l,r);
     //passando os elementos ordenados para a matriz
     k=0;
     for (i=0;i<5;i++) {
         for(j=0;j<5;j++) {
                          matriz5[i][j] = a[k];
                          k++;
                          }
     } 
     printf("\n\nMatriz ordenada pressione qualquer tecla para visualizar");
     getch();
     printf("\n\nA nova matriz eh:\n");
     for (i=0;i<5;i++) {
       for(j=0;j<5;j++) {
                         printf("\t%d\t",matriz5[i][j]);
                        }
     printf("\n");
     }
}         

//Ordenado a matriz 7x7
void ordena2(int matriz7[7][7]) {
     int i,j,k=0;
     int l=0,r=48;
     Item a[49];
     for (i=0;i<7;i++) {
         for(j=0;j<7;j++) {
                          //transformando a matriz 7x7 em uma linear
                          a[k] = matriz7[i][j];
                          k++;
                          }
     }
     //ordenado
     radixLSD(a,l,r);
     k=0;
     //passando os elementos ordenados para a matriz
     for (i=0;i<7;i++) {
         for(j=0;j<7;j++) {
                          matriz7[i][j] = a[k];
                          k++;
                          }
     }                             
     printf("\n\nMatriz ordenada pressione qualquer tecla para visualizar");
     getch();
     printf("\n\nA nova matriz eh:\n");
     for (i=0;i<7;i++) {
       for(j=0;j<7;j++) {
                         printf("%10d ",matriz7[i][j]);
                        }
     printf("\n");
     }
}          
//Ordenado a matriz 9x9
void ordena3(int matriz9[9][9]) {
     int i,j,k=0;
     int l=0,r=80;
     Item a[81];
     for (i=0;i<9;i++) {
         for(j=0;j<9;j++) {
                          //transformando a matriz 9x9 em uma linear
                          a[k] = matriz9[i][j];
                          k++;
                          }
     }
     //ordenado
     radixLSD(a,l,r);
     //passando os elementos ordenados para a matriz
     k=0;
     for (i=0;i<9;i++) {
         for(j=0;j<9;j++) {
                          matriz9[i][j] = a[k];
                          k++;
                          }
     }                             
     printf("\n\nMatriz ordenada pressione qualquer tecla para visualizar");
     getch();
     printf("\n\nA nova matriz eh:\n");
     for (i=0;i<9;i++) {
       for(j=0;j<9;j++) {
                         printf("%8d",matriz9[i][j]);
                        }
     printf("\n");
     }
}         
////////////////////////////////////////////////////////////////////////         
//Ordenado por radix sort
void radixLSD(Item a[], int l, int r)
{

     int i, j, w, count[R+1];
     
     for (w = bytesword-1; w >= 0; w--)
     {
         for (j = 0; j < R; j++) count[j] = 0;
         
         for (i = l; i <= r; i++)
         count[digit(a[i], w) + 1]++;
         
         for (j = 1; j < R; j++)
         count[j] += count[j-1];     
         
         for (i = l; i <= r; i++)
         aux[count[digit(a[i], w)]++] = a[i];

         for (i = l; i <= r; i++) a[i] = aux[i];
     
     }
}
