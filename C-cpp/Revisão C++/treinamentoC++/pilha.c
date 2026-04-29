#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
   int numero[100];
   int topo, base;
}Pilha;

void init(Pilha *pile);
int  push(Pilha *pile, int Dado);
int  full(Pilha pile);
int  not_full(Pilha pile);

int main()
{
       
    Pilha pile;
    int hexadecimal, resto;;
    
    init(&pile);      
    printf("Programa Conversor Hexadecimal --> Binario");
    printf("\n\n\nDigite o valor em Hexadecimal para ser convertido: ");
    scanf("%x", &hexadecimal);
    printf("O numero %x em hexadecimal equivale a ", hexadecimal);
    do
    {
       resto = hexadecimal%2;
       hexadecimal /= 2;
       push(&pile, resto);
    }while(hexadecimal != 0 && (full(pile) != 1)); 
      
    for( ; pile.topo > pile.base ; pile.topo--)
    {
       printf("%d", pile.numero[pile.topo - 1]);
    }
    
    printf(" em binario.\n\n\n");
    system("pause");
    return 0;
}

void init(P)
Pilha *P;
{
  P->base=0; 
  P->topo=0;
}

int push(P, numero)
Pilha *P;
int numero;
{
  if (P->topo < 100) 
  {
     P->numero[P->topo]=numero;
     (P->topo)++;
     return(1);
  }
  else
     return(0);
}

int full(P)
Pilha P;
{
  if (P.topo == 100)
     return(1);
  else
     return(0);
}

int not_full(P)
Pilha P;
{
  if (P.topo == P.base)
     return(1);
  else
     return(0);
}

       
