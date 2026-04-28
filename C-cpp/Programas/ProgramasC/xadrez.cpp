#include <stdio.h>
#include <stdlib.h>

main()
{
      int decimal, binario_invertido = 0, aux, binario = 0;
      
      printf("Digite um numero:\n");
      scanf("%d", &decimal);
      
      for(binario_invertido = 0; decimal > 0; decimal /= 2){
          binario_invertido = binario_invertido * 10 + decimal % 2;
      }
      aux = binario_invertido;
      for(binario = 0; aux > 0; aux /= 10){
          binario = binario * 10 + aux % 10;
      }    
      printf("O numero binario eh %d\n", binario);
      
      system("pause");
      return 0;
}
