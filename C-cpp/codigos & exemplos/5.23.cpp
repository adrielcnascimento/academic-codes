#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float conta_horas (float, float, float);

int main ( ) {
    float horas, minutos, segundos;
      
    printf ("%f ", conta_horas (horas, minutos, segundos));
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

float conta_horas (float h, float min,float seg){
    h == (time_t (NULL));
    min =  h / 60;
    seg = h / 360;
    return seg;
}
    
    
