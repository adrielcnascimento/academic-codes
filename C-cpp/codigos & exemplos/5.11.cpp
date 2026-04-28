#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float arredonda_para_inteiro (float, float);
float arredonda_para_decimos (float, float);
float arredonda_para_centesimos (float, float);
float arredonda_para_milesimos (float, float);

int main ( ) {
    int d;
    float X, i, c, m;
    
    printf ("Dgite um valor para x\n");
    scanf  ("%f", &X);
    printf ("INTEIRO\t\tDECIMAL\t\tCENTESIMAL\t\tMILESIMAL\n");
    printf ("%.0f", arredonda_para_inteiro (X, i));
    printf ("\t\t%.1f", arredonda_para_decimos (X, d));
    printf ("\t\t%.2f", arredonda_para_centesimos(X, c));
    printf ("\t\t\t%.3f", arredonda_para_milesimos(X, m));
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

float arredonda_para_inteiro (float y, float a) {
    a = floor (y);
    return a;
} 

float arredonda_para_decimos (float y, float b){
      b = floor (y * 10 + .5) / 10;      
      return b;
}

float arredonda_para_centesimos (float y, float c){
      c = floor (y * 100 + .5) / 100;      
      return c;
}

float arredonda_para_milesimos (float y, float d){
      d = floor (y * 1000 + .5) / 1000;
      return d;
}
