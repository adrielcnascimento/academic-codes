/* Questão 5.41 ==> Deitel                                                    */
#include <stdio.h>

long fatorial(long);

main()
{
      int i, impressao;
      
      for(i = 1; i <= 3; i++){
          printf("%2d! = %ld\n", i, fatorial(i));
      }
      getchar();
      return 0;
}
long fatorial(long numero)
{
    printf("(%ld! x %ld) = %ld\n", numero, numero -1, fatorial);
     if(numero <= 1)
         return 1;
     else
         return (numero * fatorial(numero - 1));
}
