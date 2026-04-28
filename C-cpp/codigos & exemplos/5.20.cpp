#include <stdio.h>
#include <stdlib.h>

char fillCharacter (void);
int lado (void);

int main () {
    int tam, col, lin; 
    char caract;
    
    printf ("Programa que mostra na tela um quadrado\n\n\n"); 

    tam = lado ();
    caract = fillCharacter();
    
    for(lin = 1; lin <= tam; lin++) {
       for(col = 1; col <= tam; col++)
          printf ("%c", caract);
       printf ("\n");
    }
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
int lado (void){ //Funçao lado
    int x;
    
    printf ("Entre com o tamanho do quadrado: ");
    scanf ("%d", &x);
    return x;
}
char fillCharacter(void) { //Funçao fillCharacter 
     char caractere;
     
     printf ("Entre com o caratere que deseja pra formar o quadrado: ");
     do {
         scanf ("%c", &caractere);
     } while (caractere == '\n');
     return caractere;
}

