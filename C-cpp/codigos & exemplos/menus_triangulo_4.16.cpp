#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int cont, num, asterisco, branco;
    char opcao;
    
    do {
        system ("cls");
        printf ("\t\tMOSTRA TRIANGULOS\n\n");
        printf ("selecione a opcao desejada\n");
        printf ("\t\tA para *\n"
                "\t\t      **\n\n"
                "\t\tB para **\n"
                "\t\t       *\n\n"
                "\t\tC para **\n"
                "\t\t        * \n\n"
                "\t\tD para  *\n"
                "\t\t       **\n\n"
                "\t\tE para finalizar\n");
        scanf  ("%c", &opcao);
        
        switch (opcao){
               case 'A':    case 'a':
                    printf ("digite o tamanho do triangulo: \n");
                    scanf  ("%d", &num);
                    
                    for (cont = 1; cont <= num;cont ++){
	 	                for (asterisco = 1; asterisco <= cont; asterisco ++)
		  		            printf ("*");
		  		            printf ("\n");
                    } 
                               break;
               
               case 'B':    case 'b':
                    printf ("digite o tamanho do triangulo: \n");
                     scanf  ("%d", &num);
	 
	                 for (cont = num; cont >= 0;cont --){
	 	                 for (asterisco = cont; asterisco > 0; asterisco --)
		  		             printf ("*");
		  		             printf ("\n");  		
                      }
                               break;
               
               case 'C':    case 'c':
                    printf ("digite o tamanho do triangulo: \n");
                    scanf  ("%d", &num);
	 
	                for (cont = num; cont >= 1;cont --){
	 	                for (branco = num; branco > cont; branco --)
		  		            printf (" ");
		                for (asterisco = 1; asterisco < cont; asterisco ++)
		  		        printf ("*");		  
		  		        printf ("\n");  		
                   }
                               break;
               
               case 'D':    case 'd':
                    printf ("digite o tamanho do triangulo: \n");
                    scanf  ("%d", &num);
	 
	                for (cont = num; cont >= 1;cont --){
	 	                for (asterisco = 1; asterisco < cont; asterisco ++)
		  		        printf (" ");
                        for (branco = num; branco > cont; branco --)
		  		        printf ("*");
		  		  
		  		        printf ("\n");  		
                    }
                               break;
               
               case 'E':    case 'e':
                               break;
               
               case  '\n' :
               case  ' ':
                               break;
               
               default : printf ("Escolha invalida\n");
        }
        system ("pause>>null");
    }while (opcao != 'E' && opcao != 'e');
    
    return 0;
}
