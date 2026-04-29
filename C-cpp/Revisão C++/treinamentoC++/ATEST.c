#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<ctype.h>


void text(char* , FILE*);
void results(int* , FILE*);


int main()
{

   FILE *fp;
   int *ip;
   char *texto, reponse;

   printf( "\n\tVoce gostaria de gravar em arquivo?" );
   printf( "\n\t<PARA ARMAZENAMENTO DE DADOS>\n\t<S|N>\n");
   printf( "\n\tRESP:" );
   reponse = getche();
   reponse = toupper(reponse);


   if ( reponse == 'S' )
   {
   
    //TESTE DA CRIAÇÃO DO ARQUIVO.   
	if ( (fp=fopen("nprograma.txt","a")) == NULL )
	{
		printf( "\n\n\tFALHA NA CRIACAO DO ARQUIVO\n\n" );
		printf( "\tTENTE OUTRA VEZ\n" );
		getch();
		exit(1);
	}else{
		printf( "\n\n\tSUCESSO NA CRIACAO DO ARQUIVO\n\n" );
		printf( "\tPara acessar dados: abrir arquivo nprograma.txt\n" );
		printf( "\tNa pasta onde encontra-se o pograma em execucao\n\n" );
	}

   }else{

	printf( "\n\nOS DADOS SERAO PERDIDOS\n\n" );

   }

   printf( "\n\n\tEscolha o tipo de dado a ser armazenado:\n" );
   printf( "\t(T) texto;\n\t(N) resultados(numeros);" );
   printf( "\n\tRESP:");
   reponse = getche();
   reponse = toupper(reponse);

   if ( reponse == 'T' )
   {
	    text(texto, fp);
   }
   else if ( reponse == 'N')
   {
        results(ip, fp);
   }
   else
   {
	 printf( "\n\n\tDADO INVALIDO\n\n" );
	 printf( "\n\n\tTENTE OUTRA VEZ\n\n" );
	 getch();
	 exit(1);
   }
   
   fclose(fp);
   free(texto);
   free(ip);
   system("cls");
   printf( "\n\n\tFIM DE PROGRAMA\n\n" );
   system("pause");
   return 0;
}


//-----------------------------FUNCOES----------------------------------//

//FUNÇÃO PARA ESCREVER UM TEXTO EM UM ARQUIVO.
void text(char *texto, FILE *fp)
{
   //TESTE DE ALOCAÇÃO DE TEXTO.
   if ( (texto=(char*)calloc( 1000, sizeof(char) )) == NULL )
   {
	printf( "\n\n\tFALHA-TENTE OUTRA VEZ\n\n" );
	system("pause");
	exit(1);
   }

   printf( "\n\nDigite o texto.\n" );
   gets(texto);
   fprintf( fp, "%s", "\n" );
   fprintf( fp, "%s", texto);
   system("pause");

}


//FUNÇÃO PARA ESCREVER UM NÚMERO EM UM ARQUIVO.
void results(int *ip, FILE *fp)
{

   int a, b;

   //TESTE PARA ALOCAÇÃO DO NÚMERO.
   if ( (ip=(int*)calloc( 1, sizeof(int) )) == NULL )
   {
	printf( "\n\n\tFALHA-TENTE OUTRA VEZ\n\n" );
	system("pause");
	exit(1);
   }

   printf( "\n\n Digite a e b:\n" );
   printf( "A:" );
   scanf ( "%d", &a );
   printf( "\nB:" );
   scanf ( "%d", &b );

   *ip = (a*b)+ b*(a*a) + a*(b*b);
   fprintf( fp, "%s", "\n" );
   fprintf( fp, "%d", *ip);
   system("pause");

}


