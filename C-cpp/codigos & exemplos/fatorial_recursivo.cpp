#include <stdio.h>
#include <stdlib.h>

int fatorial (int);

int main ( ){
    int num;
    printf ("Mostra o fatorial de um numero\n");
    printf ("Digite um numero: ");
    scanf  ("%d", &num);
    
    printf ("O fatorial eh %d", fatorial (num));
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

int fatorial (int n){
    if (n==0)
        return 1;
    return n * fatorial (n - 1);
}
    
