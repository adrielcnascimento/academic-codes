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
#define maxN 10000000 

typedef int Item;
static Item aux[maxN];

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
