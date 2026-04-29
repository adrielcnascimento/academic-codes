#include <stdio.h>
#include <stdlib.h>

main()
{
      int a, b;
      
      printf("Entre com o valor de A: ");
      scanf("%d", &a);
      printf("Entre com o valor de B: ");
      scanf("%d", &b);
      
      printf("Relacao Logica:\n");
      printf("A AND B = %d\n", a&&b);
      printf("A OR B = %d\n", a||b);
      printf("Bit a Bit:\n");
      printf("A AND B = %d\n", a&b);
      printf("A OR B = %d\n", a|b);
      printf("A XOR B = %d\n", a^b);
      printf("(A deslocado de dois bits a esquerda) AND [(B+1) deslocado dois bits a direita] = %d\n", (a<<2)&((b+1)>>2));

      system("pause");
      return 0;
}
      
      
