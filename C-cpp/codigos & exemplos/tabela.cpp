#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ( ) {
	 int num, pot, exp;
	 
	 printf ("PROGRAMA QUE MOSTRA A TABELA DE POTENCIAS \n");
	 
	 for (num = 1; num <= 10; num ++){
	 	  for (pot =1, exp = 1; exp <= 5; exp ++){
	 	  pot = pot * num;
	 	  printf ("%d\t  %d\t \n", num, pot);
		  }
		  exp = 1;
    }
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
  
	 	  
	 
