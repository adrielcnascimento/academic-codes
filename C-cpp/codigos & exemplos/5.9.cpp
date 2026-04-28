#include <stdio.h>
#include <stdlib.h>

float calcula_taxa (float, float, float);

int main ( ) {
    int carro, cont;
    float tempo, valor = 2.00, multa = 0.50, tempo_total = 0, valor_arrecadado = 0;
    
    
    printf ("\t\tPRECO DO ESTACIONAMENTO\n");
    for (cont = 1;cont <= 3; cont ++){
          
          printf ("\n\nentre com o carro, as horas\n");
          scanf ("%d %f", &carro, &tempo);
          printf ("CARRO\t\tHORAS\t\tTAXA\n");
          printf ("%d\t\t%.2f\t\t%.2f", carro, tempo, calcula_taxa(tempo, valor, multa));
          tempo_total += tempo;
          valor_arrecadado +=  calcula_taxa(tempo, valor, multa);          
    }
    
    printf ("\nTOTAL\t\t%.2f\t\t%.2f", tempo_total, valor_arrecadado);
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

float calcula_taxa (float horas, float taxa, float adicional){
    
      if (horas <= 3.00)
          taxa = taxa;
      else if (horas < 24.00)
           taxa = taxa + adicional * (horas - 3);
      else taxa = 10.00;
      
      return taxa;
}
