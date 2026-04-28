#include <stdio.h>
#include <stdlib.h>

main()
{
      int numero, d1, d2, d3, d4, criptografado, aux1, aux2;
      
      printf("Digite um numero de quatro digitos:\n");
      scanf("%d", &numero);
      
      d1 = (numero / 1000 + 3) % 10; 
      d2 = (numero % 1000 / 100 + 3) % 10; 
      d3 = (numero % 100 / 10 + 3) % 10 ;
      d4 = (numero % 10 + 3) % 10;
      printf("%d %d %d %d\n", d1, d2, d3, d4);
      aux1 = d1;
      d1 = d3;
      d3 = aux1;
      aux2 = d2;
      d2 = d4;
      d4 = aux2;
      printf("%d %d %d %d\n", d1, d2, d3, d4);
      criptografado = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
      printf("%d\n", criptografado);
      
      system("pause");
      return 0;
}
