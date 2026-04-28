#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n);
main()
{
      long n;
      
      printf("Digite o numero de termos da serie: ");
      scanf("%ld", &n);
      
      printf("\n");
      printf("Sequencia de Fibonacci para %d termos:\n", n);
      fibonacci(n);
      printf("\n\n");
      
      system("pause");
      return 0;
}
void fibonacci(int n)
{
     long termos = 0, fib1 = 0, fib2 = 1, soma;
     
     while(termos <= n){
         if(termos == 0 || termos == 1)
             printf("%d ", termos);
         else{
              soma = fib1 + fib2;
              fib1 = fib2;
              fib2 = soma;
              printf("%d ", soma);
         }
         termos++;
     }
     return;
}
             
     
