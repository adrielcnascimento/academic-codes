/*ORGANIZAND0 NUMEROS COM UM LOOP for*/
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
	 int n1, n2, n3, n4, n5, aux, cont;
	 
	 printf ("Odena 5 numeros em ordem crescente: \n");
	 printf ("Digite os cinco numeros: ");
	 scanf  ("%d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5);
	 
	 for (cont = 1; cont <= 4; cont ++){
	 	  
	 	  if (n1 > n2){
	  		  aux = n1;
			  n1 = n2;
			  n2 = aux;
		   }
			if (n2 > n3){
	  		  aux = n2;
			  n2 = n3;
			  n3 = aux;
		   }
			if (n3 > n4){
	  		  aux = n3;
			  n3 = n4;
			  n4 = aux;
		   }
			 if (n4 > n5){
	  		  aux = n4;
			  n4 = n5;
			  n5 = aux;
		   }
	 }
	 
	 printf ("\n\n");
	 printf ("%d %d %d %d %d ", n1, n2, n3, n4, n5);
	 printf ("\n\n\n");
	 system ("pause");
	 return 0;
}
	 
