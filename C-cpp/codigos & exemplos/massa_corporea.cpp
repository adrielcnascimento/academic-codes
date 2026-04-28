/*MASSA CORPOREA*/
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
	 int sexo;
	 float altura, peso;
	 
	 printf ("entre com o sexo:\n 1 para feminino \n 2 para masculino\n");
	 scanf ("%d", &sexo);
	 
	 printf ("Entre com a altura \n");
	 scanf ("%f", &altura);
	 
	 if (sexo == 1)
	 peso = (62.1 * altura) - 44.7;
	 else peso = (72.7 * altura) -58;
	 
	 printf ("o valor da massa corporea eh : %.2f", peso);
	 printf ("\n\n\n");
	 system ("pause");
	 return 0;
}
