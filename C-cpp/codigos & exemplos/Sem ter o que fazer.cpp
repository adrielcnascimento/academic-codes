/*BARRA DE CARGA*/

#include <stdio.h>
#include <stdlib.h>

#define CARACTERE_DA_BARRA 220

int main ( ) {
    int cont;
    
    for (cont = 1; cont <= 100; cont ++){
        
        if (cont > 10 && cont < 20)
           printf ("%c", CARACTERE_DA_BARRA);
        
        if (cont > 20 && cont < 30){
           system ("color 01");
           printf ("%c", CARACTERE_DA_BARRA);
        }
        if (cont > 30 && cont < 40){
           system ("color 07");
           printf ("%c", CARACTERE_DA_BARRA);
        }
        if (cont > 40 && cont < 50){
           system ("color 01");
           printf ("%c", CARACTERE_DA_BARRA);
        }
        if (cont > 50 && cont < 60){
           system ("color 07");
           printf ("%c", CARACTERE_DA_BARRA);
        }
        if (cont > 60 && cont < 70){
           system ("color 01");
           printf ("%c", CARACTERE_DA_BARRA);
        }
        if (cont > 70 && cont < 80){
           system ("color 07");
           printf ("%c", CARACTERE_DA_BARRA);
        }
        if (cont > 80 && cont < 90){
           system ("color 01");
           printf ("%c", CARACTERE_DA_BARRA);
        }
        if (cont > 90 && cont <=100){
           system ("color 0F");
           printf ("%c", CARACTERE_DA_BARRA);
        }
       
}
system ("color 01");
printf ("\n\n\n");
system ("pause>>null");
return 0;
}
