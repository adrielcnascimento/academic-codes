#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int termos, fator, conta_termo, exp, potencia;
    float X, somatorio, fatorial;
    
    printf ("CALCULA O RESULTADOR DA SERIE ABAIXO:\n");
    printf ("           x     x2    x3      \n"
            " e* = 1 + --- + --- + --- + ...\n"
            "           1!    2!    3!      \n");
    printf ("digite um valor para x e o numeros de termos: ");
    scanf  ("%f  %d", &X, &termos);
    
    for (conta_termo = 2; conta_termo <= termos; conta_termo ++){
        
        potencia = 1;
        for (exp = 1;exp <= conta_termo - 1; exp ++)
            potencia *= X;
        
        fatorial = 1;
        
        for (fator = 1;fator <= conta_termo - 1; fator ++)
            fatorial *= fator;
            
        somatorio += potencia/fatorial;
    }
    
    printf ("O valor do somatorio eh: %.3f", somatorio);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
