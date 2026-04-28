/*PROGRAMA DO CALCULA DA MAÇÃ*/
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
	 int quant;
	 float preco;
	 
	 printf ("PROGRAMA QUE CALCULA O PRECO DA MAÇÃ"
	 		   "\nabaixo de 12 R$: 0,30 acima de 12 R$: 0.25\n");
	 printf ("Entre com a quantidade de macãs: \n");
	 scanf  ("%d", &quant);
	 
	 if (quant > 12)
	 preco = 0.25 * quant;
	 else preco = 0.30 * quant;
	 
	 printf ("O valor do preco foi de R$: %.2f ", preco);
	 printf ("\n\n\n");
	 system ("pause");
	 return 0;
}
