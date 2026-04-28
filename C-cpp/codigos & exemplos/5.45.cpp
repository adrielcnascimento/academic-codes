#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distancia (float, float, float, float);
int main ( ) {
    float x1, y1, x2, y2;
    
    printf ("Programa que calcula a distancia de dois pontos\n");
    printf ("digite as coordenadas (X, Y) do 1 ponto: \n");
    scanf  ("%f %f", &x1, &y1);
    printf ("digite as coordenadas (X, Y) do 2 ponto: \n");
    scanf  ("%f %f", &x2, &y2);
    printf ("%f u.c.", distancia (x1, y1, x2, y2));
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
float distancia (float x1, float y1, float x2, float y2){
      return sqrt((pow( x1 - x2 ,2) + pow( y1 - y2 ,2)));
}
