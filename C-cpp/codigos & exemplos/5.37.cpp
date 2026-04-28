#include <stdio.h>
#include <stdlib.h>

int potencia (int, int);

int main ( ) {
    int valor1, valor2;
    
    printf ("digite o valor da base e do expoente:\n");
    scanf  ("%d %d", &valor1, &valor2);
    
    printf ("%d\n", potencia (valor1, valor2));
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
int potencia (int base, int expoente){
    
    while (expoente > 1)
          base = base * potencia (base, expoente - 1);
    return base;
}
