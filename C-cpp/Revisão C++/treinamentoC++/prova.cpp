/* Programa - Ordenação de Strings */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 5
#define TAM 10

void quick_string(char item[][TAM], int count);
void qs_string(char item[][TAM], int left, int right);


main(void)
{
int i;
char s[N][TAM];
//clrscr();
for(i=0;i<N;i++)
{
printf("digite a string[%d]:",i+1);
gets(s[i]);
}
quick_string(s, N);
printf("\nStrings ordenadas:");
for(i=0;i<N;i++)
   printf("\n%s", s[i]);
getch();
}


/* Uma quicksort para strings */

void quick_string(char item[][TAM], int count)
{
  qs_string(item, 0, count-1);
}

void qs_string(char item[][TAM], int left, int right)
{
   register int i, j;
   char *x;
   char temp[10];
   i=left; j=right;
   x=item[(left+right)/2];
   do {
     while(strcmp(item[i],x)<0 && i<right) i++;
     while(strcmp(item[j],x)>0 && j>left) j--;
     if(i<=j) {
       strcpy(temp,item[i]);
       strcpy(item[i],item[j]);
       strcpy(item[j],temp);
       i++; j--;
     }
   }while(i<=j);
   if(left<j) qs_string(item, left, j);
   if(i<right) qs_string(item, i, right);
}



