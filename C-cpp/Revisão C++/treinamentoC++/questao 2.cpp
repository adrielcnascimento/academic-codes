#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
unsigned int const m = 20;
void  BucketSort(unsigned int a[],unsigned int n) {
      int buckets[m+1];
      for (unsigned int j=0;j<=m;++j) 
         buckets[j]=0;
      for (unsigned int i=0;i<n;++i) {
         ++buckets[a[i]];
         }
        for (unsigned int i=0,j=0;j<=m;++j) {
          for (unsigned int k=buckets[j];k>0;--k)
           {
           a[i++]=j;     
           }
         }
}
main() {
       unsigned int n;
       unsigned int a[m];
       srand(time(0));
       printf("A sequencia a ser ordenada sera:\n");       
       for (n=0;n<m;n++) {
           a[n] = rand()%20;
           printf("%d ",a[n]);
       }
       printf("\n\nPressione qualquer tecla para ordenar\n");
       getch();
       printf("\nA seuqencia ordenada eh:\n");
       BucketSort(a,n);
       for (n=0;n<m;++n) {
           printf("%d ",a[n]);
       }
       printf("\n\nPressione qualquer tecla para sair\n");
       getch();
}
