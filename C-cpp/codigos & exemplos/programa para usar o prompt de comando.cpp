/*  PROGRAMA DE TESTE PARA USAR O PROMP DE COMANDO  */

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num;
    
    system ("color 80");
    system ("title ADRIEL FODÃO!!!");
    
    printf ("Programa executado em:\n");
    system ("cd");
    
    printf ("\nRodando em sistema:");
    system ("ver");
    
    printf ("\nNo volume:\n");
    system ("vol");
    
    printf ("\n");
    
    printf ("Verificando memoria...");
    system ("mem");
    printf ("\n\n\n");
    system ("pause");
    system ("cls");
    
    do {
    
    printf ("\t*****************************************\n"
            "\t**DESEJA UTILIZAR O PROMP DE COMANDO ? **\n"
            "\t*****************************************\n");
    printf ("Entre com 1 para SIM\n"
            "Entre com 2 para NAO\n");
    scanf ("%d", &num);
    system ("cls");
    if (num < 1 || num > 2 )
    printf ("opcao invalida tente novamente: \n\n\n\n");
    
    }while (num < 1 || num >2);

    if (num == 1){   
    system ("color 0f");
    system ("command");
    printf ("programa completamente executado em\n");
    system ("date/t");
    printf ("as ");
    system ("time/t");
    printf ("\n\n");
    printf ("TCHAU, APARECA\n\n\n\n");
    
    }
    
    if (num == 2){   
    printf ("programa completamente executado em\n");
    system ("date/t");
    printf ("as ");
    system ("time/t");
    printf ("\n\n");
    printf ("TCHAU, APARECA\n\n\n\n");
    }
    system ("pause");    
    return 0;
}
