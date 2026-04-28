/* Demonstrando o qualificador do tipo const */
#include <stdio.h>
#include <stdlib.h>

void tentamodificaArray(const int []);

main()
{
      int a[] = {10, 20, 30};
      tentamodificaArray(a);
      
      printf("%d %d %d\n", a[0], a[1], a[2]);
      printf("\n\n");
      system("pause");
      return 0;
}
void tentamodificaArray(const int b[])
{
     b[0] /= 2;               /* erro */
     b[1] /= 2;               /* erro */
     b[2] /= 2;               /* erro */
}
