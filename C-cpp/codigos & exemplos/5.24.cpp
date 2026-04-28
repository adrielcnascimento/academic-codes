#include <stdio.h>
#include <stdlib.h>

float Fahrenheit_celsius (float);
float celsius_Fahrenheit (float);

int main ( ) {
    int temperatura, opcao;
    
    do{
        printf ("Conversor de temperatura\n");
        printf ("selecione sua opcao: \n\n");
        printf ("1 - celsius para Fahrenheit\n\n");
        printf ("2 - Fahrenheit para celsius\n\n");
        scanf  ("%d", &opcao);
        
        if (opcao != 1 && opcao != 2)
        printf ("Escolha invalida\n\n");
    }while (opcao != 1 && opcao != 2);
    
    printf ("Entre com a temperatura: ");
    scanf  ("%d", &temperatura);
    
    if (opcao == 1)
       printf ("%.3f", celsius_Fahrenheit(temperatura));
    
    else printf ("%.3f", Fahrenheit_celsius (temperatura));
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

float Fahrenheit_celsius (float valor){
      valor = (5 * valor - 160) / 9;
      return valor; 
}

float celsius_Fahrenheit (float valor){
      valor = ( 9 * valor + 160) / 5;
      
      return valor;
}
