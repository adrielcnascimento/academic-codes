#include <stdio.h>
#include <stdlib.h>

int potenciaInt (int , int);

int main ( ) {
    int base, expoente;
    
    printf ("CALCULA A POTENCIA DE UM NUMERO\n");
    printf ("digite o valor da base e do exponte\n");
    scanf  ("%d %d", &base, &expoente);
    
    printf ("O valor da potencia eh = %d", potenciaInt (base, expoente));
    printf ("\n\n\n");
    system ("pause");
}

int potenciaInt (int b, int exp){
    int cont, pot;
    
    pot = b;
    for (cont = 1; cont < exp; cont ++)
        pot *= b;
    return pot;
}
