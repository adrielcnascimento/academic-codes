//Baralho ordenado usando ponteiros
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprime_cartas_ordenadas (char *[], char *[]);

int main (void){
    char *naipe [4] = {"Ouros", "Espadas","Copas", "Paus"};
    char *face [13] = {"As", "Dois", "Tres", "Quatro",
                       "Cinco", "Seis", "Sete", "Oito",
                       "Nove", "Dez", "Valete", "Damas", "Reis"};
                       
    printf ("Baralho ordenado \n\n");
    imprime_cartas_ordenadas (face, naipe);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

void imprime_cartas_ordenadas (char *face[], char *naipe[]){
     char **pont_face, **pont_naipe;
     
     for (pont_naipe = naipe; pont_naipe < naipe + 4; pont_naipe ++){
         for (pont_face = face; pont_face < face + 13; pont_face ++)
             printf ("%s de %s \n", *pont_face, *pont_naipe);
         printf ("\n\n");
     }
             
     return ;
}
