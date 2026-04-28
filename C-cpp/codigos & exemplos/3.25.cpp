#include <stdio.h>
#include <stdlib.h>
int main ( ) {
    int N= 0;
    printf ("N\t 10*N\t 100*N\t 1000*N\n\n");
    while (N < 10){
          N ++;
          printf ("%d\t %d\t %d\t %d\t ", N, 10*N, 100*N, 1000*N);
          printf ("\n");
    }
    printf("\n\n\n");
    system ("pause");
    return 0;
}
