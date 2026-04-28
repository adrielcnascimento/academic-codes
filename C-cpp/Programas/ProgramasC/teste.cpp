#include <stdio.h>
#include <stdlib.h>

main()
{
      int int1, int2;
      printf("Digite dois numeros entre 1 e 10: ");
      scanf("%d %d", &int1, &int2);
      
      if(int1 + int2 > 10)
          printf("A soma dos dois numeros e maior que DEZ!!!\n");
      else if(int1 + int2 < 10)
          printf("A soma dos dois numeros e menor que DEZ!!!\n");
      else
          printf("A soma dos dois numeros e igual que DEZ!!!\n");
      
      system("pause");
      return 0;
}
