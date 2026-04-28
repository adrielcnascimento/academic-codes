/*lê varios inteiros com base no primeiro*/
#include <stdio.h>
#include <stdlib.h>
int main () {
    int vez, num, total;
    
    printf ("Entre com um inteiro "); // primeiro numero armazenado
    scanf  ("%d", &vez);
    
    total = vez;
    
    for(;vez >= 1; vez --){    
       printf ("Entre com o proximo inteiro: \n");
       scanf("%d", &num);
       total = total + num;
    }
    
    printf ("O valor da soma e: %d", total);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
