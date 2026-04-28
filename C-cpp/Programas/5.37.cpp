/* Questão 5.37 ==> Deitel                                                    */

#include <stdio.h>
#include <stdlib.h>

int potencia(int, int); /* protótipo da função */

main()
{
      int base, expoente;
      
      printf("Este programa calcula a potencia de um numero elevado a outro\n");
      printf("Digite a base\n");
      scanf("%d", &base);
      
      printf("Digite o expoente\n");
      scanf("%d", &expoente);
      printf("%d elevado a %d eh %d\n\n", base, expoente, potencia(base, expoente));
      
      system("pause");
      return 0;
}
int potencia(int base, int expoente){ /* definição da função */
    if(expoente <= 1)
        return base;
    else 
        return (base * potencia(expoente - 1));
}
          
