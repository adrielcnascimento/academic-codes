#include <stdio.h>
#include <stdlib.h>

main()
{
      int n1, n2, n3, n4, aux;
      
      printf("INforme 4 numeros\n");
      scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
      
      while(n1 > n2 || n2 > n3 || n3 > n4) {
          if(n1 > n2) {
              aux = n2;
              n2 = n1;
              n1 = aux;
          }
          if(n2 > n3) {
              aux = n3;
              n3 = n2;
              n2 = aux;
          }
          if(n3 > n4) {
             aux = n4;
             n4 = n3;
             n3 = aux;
          }
        
     }
     
     printf("%d %d %d %d\n", n1, n2, n3, n4);
     system("pause");
     return 0;
     }
