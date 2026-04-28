#include <stdio.h>
#include <stdlib.h>

main()
{
      int binario, decimal = 0, produto = 1, digito;
      
      printf("Digite um numero binario\n");
      scanf("%d", &binario);
      
      digito = binario % 10;
      while(binario > 0){
          decimal += digito;
          binario /= 10;
          digito = binario % 10;
          produto *= 2;
          digito *= produto;
      }
      printf("Decimal e %d\n", decimal);   
      system("pause");
      return 0;
}
