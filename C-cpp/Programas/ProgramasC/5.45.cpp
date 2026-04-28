/* 5.46 ==> Deitel */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int misterio(int a, int b)
{
      if(b == 1)
          return a;
      else return a + misterio(a, b - 1);
}
main()
{
      int x, y;
      
      printf("Entre com dois inteiros\n");
      scanf("%d%d", &x, &y);
      printf("O resultado e %d\n", misterio(x, y));
      printf("\n\n");
      system("pause");
      return 0;
}
