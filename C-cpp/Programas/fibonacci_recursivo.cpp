#include <stdio.h>
#include <stdlib.h>

int fibonacci_recursivo(int n);
main()
{
      long n, termos;
      
      printf("Digite o numero de termos da serie: ");
      scanf("%ld", &n);
      
      printf("\n");
      printf("Sequencia de Fibonacci para %d termos:\n", n);
      for(termos = 0; termos <= n; termos++)
          printf("%d ", fibonacci_recursivo(termos));
          
      printf("\n\n");
      
      system("pause");
      return 0;
}
int fibonacci_recursivo(int n)
{
     if(n == 0 || n == 1)
         return n;
     else return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2);
}  
     
             
     
