#include <stdio.h>
#include <stdlib.h>
 main(){
   int linha, coluna, n;
   
   printf("Digite n:\n");
   scanf("%d", &n);
   printf("\n");
   
   for(linha = 1; linha <= n; linha++){
       for(coluna = 1; coluna <= n; coluna++){
           if(coluna <= (n - linha)/2)  
               printf(" ");
           else
               printf("*");
 
 
       }
       printf("\n");
       
   }
   printf("\n\n");
   system("pause");
   return 0;
}
