#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

typedef struct
{
   char nome[40];
   char fone[10];
   char niver[10];
}amigo;

int main()
{
       amigo agenda[10];
       char opcao;
       int n = 0, i;
       FILE *fp;
       
       system("cls");
       
       fp = fopen("Agenda.dat", "rb");
       if(!fp)
       {
          printf("\nErro na abertura do arquivo");
          exit(1);
       }
       
       printf("Programa para criacao de uma agenda\n");
       do
       {
          fread(&agenda[n], sizeof(amigo), 1, fp);
          if(!feof(fp))
             n++;
          else printf("\n\nArquivo carregado\n");
       }while(!feof(fp));
       
       for(;;)
       {
          do
          {
              printf("\n\n[I]nsere");
              printf("\n[M]ostra");
              printf("\n[T]ermina");
              printf("\nOpcao: ");
              opcao = toupper(getche());
          }while(!strchr("IMT", opcao));
          
          switch(opcao)
          {
             case 'I':
                  printf("\nNome: ");
                  gets(agenda[n].nome);
                  printf("Telefone: ");
                  gets(agenda[n].fone);
                  printf("Aniversario: ");
                  gets(agenda[n].niver);
                  n++;
                  break;
              case 'M':
                   if(n==0)
                      printf("Agenda vazia");
                   else
                   {
                       for(i=0 ; i<n ; i++)
                       {
                          printf("\n\nNome: %s", agenda[i].nome);
                          printf("\nTelefone: %s", agenda[i].fone);
                          printf("\nAniversario: %s", agenda[i].niver);
                          getche();                 
                       }
                   }
                   break;
              case 'T':
                   fp = fopen("Agenda.dat", "wb");
                   if(!fp)
                   {
                          printf("\nErro na abertura do arquivo");
                          exit(1);
                   }
                   for(i = 0 ; i < n ; i++)
                      fwrite(&agenda[i], sizeof(amigo), 1, fp);
                   fclose(fp);
                   printf("\n\nArquivo gravado\n");
                   exit(0);
          }
       }       
   return 0;
}
