/*BARRA DE CARGA*/
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int cont;
    
    for (cont = 1; cont <= 300; cont ++){
        
        if (cont > 10 && cont < 20)
           printf ("*");
        
        if (cont > 20 && cont < 30){
           system ("color 01");
           printf ("*");
        }
        if (cont > 30 && cont < 40){
           system ("color 02");
           printf ("*");
        }
        if (cont > 40 && cont < 50){
           system ("color 03");
           printf ("*");
        }
        if (cont > 50 && cont < 60){
           system ("color 04");
           printf ("*");
        }
        if (cont > 60 && cont < 70){
           system ("color 05");
           printf ("*");
        }
        if (cont > 70 && cont < 80){
           system ("color 06");
           printf ("*");
        }
        if (cont > 80 && cont < 90){
           system ("color 07");
           printf ("*");
        }
        if (cont > 90 && cont < 100){
           system ("color 08");
           printf ("*");
        }
        if (cont > 100 && cont < 200){
           system ("color 09");
           printf ("*");
        }
        if (cont > 200 && cont < 300){
           system ("color 0A");
           printf ("*");
        }
}

printf ("\n\n\n");
system ("pause");
return 0;
}
