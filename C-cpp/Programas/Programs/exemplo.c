#include<stdio.h>
#include<stdlib.h>
main()
{
      int num, r;
      printf("Informe um numero: ");
      scanf("%d", &num);
      while(num % 2 != 0) {
        num = num %2;
        r = num % 2;
        printf("%d", num);
        }
        getch();
        }
