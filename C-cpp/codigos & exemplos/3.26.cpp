#include <stdio.h>
#include <stdlib.h>
int main ( ) {
    int A = 0;
    printf ("A\t A+2\t A+4\t A+6\t\n\n");
    while (A < 15){
          A +=3;
          printf ("%d\t %d\t %d\t %d\t ", A, A+2, A+4, A+6);
          printf ("\n");
    }
    printf("\n\n\n");
    system ("pause");
    return 0;
}
