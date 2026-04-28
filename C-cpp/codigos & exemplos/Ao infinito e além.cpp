#include <stdio.h>
#include <stdlib.h>
main (){
    long int cont = 1;
     while (cont > 0){
     cont = cont + cont * cont;
     printf ("%d", cont);
     }
     system ("pause");
     return 0;
}
