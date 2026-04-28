/* Questão 5.41 ==> Deitel                                                    */
#include <stdio.h>

long fatorial(long);

main()
{
      long i;
      
      for(i = 1; i <= 4; i++){
          printf("%2ld! = %ld\n", i, fatorial(i));
      }
      getchar();
      return 0;
}
long fatorial(long numero)
{    printf("%3d! = (%d x %d!)\n",numero, numero, numero - 1);
     if(numero <= 1){
         printf("  0! = 1\n");
         return 1;
     }
     else
         return (numero * fatorial(numero - 1));
}
