#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
   
   int dado1, dado2, vezes, n, soma = 0;
   
   printf("Digite o numero de vezes que voce que lancar os dados:\n");
   scanf("%d", &n);
   printf("\n");
   
   srand(time(NULL));
   for(vezes = 1; vezes <= n; vezes++){
       dado1 = rand() % 6  + 1;
       dado2 = rand() % 6 + 1;
       soma = dado1 + dado2;
       printf("%d\n", dado1);
       printf("%d\n", dado2);
       printf("soma eh %d soma\n", soma);
       printf("\n");
   }       
   system("pause");
   return 0;
}
