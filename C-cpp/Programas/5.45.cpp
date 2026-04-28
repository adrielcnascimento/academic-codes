/* 5.45 ==> Deitel */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float distancia(float X1, float X2, float Y1, float Y2)
{
      return sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));  
}
main()
{
      float X1, X2, Y1, Y2;
      
      printf("Digite respectivamente as abscissas dos pontos A e B;\n"
             "as ordenadas dos pontos A e B;\n");
      scanf("%f %f %f %f", &X1, &X2, &Y1, &Y2);
      
      printf("A distancia entre os pontos A e B e %.2f\n", distancia(X1, X2, Y1, Y2));
      printf("\n\n");
      system("pause");
      return 0;
}
