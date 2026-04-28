#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LANCE 10000

main(){
   
   int n, lance, dado, frequencia[] = {0}, resultado;
   
   printf("Digite o numero de vezes que voce que lancar os dados:\n");
   scanf("%d", &n);
   printf("\n");
   
   srand(time(NULL));
   for(lance = 0; lance <= LANCE - 1; lance++){
       dado = rand() % 6  + 1;
       printf("%d\n", dado);
       ++frequencia[lance];
   }
   system("pause");
   return 0;
}
