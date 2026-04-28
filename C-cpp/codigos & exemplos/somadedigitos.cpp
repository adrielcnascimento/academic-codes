#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num, cont = 0, soma = 0,digito;
     
    
    printf ("Le um numero e mostra quantos algarismo "
            "significativos ele tem e sa soma deles\n\n");
    
    printf ("Digite um numero: ");
    scanf  ("%d", &num);
    
    while (num % 10){
          digito = num % 10;
          soma = soma + digito; 
          num /= 10; /* num = num / 10 */
          cont ++;
          
    }
    
    printf ("A soma eh %d \n", soma);
    printf ("Ele tem  %d digitos ", cont);
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
