
#include <stdio.h>
#include <stdlib.h>


void d2b(int dec);
void d2o(int dec);

int main(void)
{
	int ch;
    FILE *p;         
  	printf("Digite o número decimal: ");
	scanf("%d",&ch);
	printf("\n");
	d2b(ch);
	d2o(ch);
	printf("\n");
	system("pause");

	return 0;
}

void bin(int dec) /* funcao decimal para binario */
{
	int bin[100],i=0,dec;
    if(dec == 0)
	return(dec+000000000);
	else {
    while(dec != 0)
	{
		fprintf(aq,"%d",dec%2);
		dec=dec/2;
	}
	i--;
	while(i>=0)
	{
		fprintf("%d",bin[i]);
		i--;
	}
	printf("\n");
}
