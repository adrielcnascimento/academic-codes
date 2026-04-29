#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
//#include <alloc.h>

main()
{
      FILE *fp;
      char *string;
      char *strong;
      
      if((string = (char*) calloc(100, sizeof(char))) == NULL)
      {
         printf("Erro");
         getch();
      }
      
      if((strong = (char*) calloc(100, sizeof(char))) == NULL)
      {
         printf("Erro");
         getch();
      }
      
      gets(string);
      printf("%s", string);
      fp = fopen("arquivo.txt", "a");
      fscanf(fp, "%s", &strong);
      //fprintf(fp, "Bla bla bla %s", strong);
      //fprintf(fp, "%s", string);
      //fprintf(fp, "%d%d", 4^5, 15|37);
      fclose(fp);
      free(string);
      free(strong);
      getch();
}
          
