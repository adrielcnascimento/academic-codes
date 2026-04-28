#include <stdio.h>
#include <stdlib.h>

main(){
   
   int numero1, numero2,  fator, fatorial1, fatorial2;
      
   printf("Digite dois numeros:\n");
   scanf("%d%d", &numero1, &numero2);
   
   fator = 1;
   fatorial1 = 1;
   for(fator = 1; fator <= numero1; fator++)
       fatorial1 *= fator;
   
   fator = 1;
   fatorial2 = 1;
   for(fator = 1; fator <= numero2; fator++)
       fatorial2*= fator;
   printf("soma dos fatoriais eh %d\n", fatorial1 + fatorial2);
   system("pause");
   return 0;
}       
