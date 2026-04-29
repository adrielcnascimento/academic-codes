#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    FILE *fp;
    int i, cont1=0, cont2=0;
    char aux, *texto;
    
    if ( (fp=fopen("text.txt","w")) == NULL)
    {
        printf( "\n\n\tFALHA NA CRIACAO DO ARQUIVO\n" );
        printf( "Por favor, tente outra vez.\n\n");
        system("pause");
        exit(1);
    }else{
        printf( "\n\n\tSUCESSO NA CRIACAO DO ARQUIVO\n" );
        printf( "\tPara acessar dados: arquivo text.txt\n\n\n" );
    }    
    if ( (texto=(char*)calloc( 32, sizeof(char) )) == NULL)
    {
        printf( "\n\n\tFALHA NA ALOCACAO\n" );
        printf( "Por favor, tente outra vez.\n\n");
        system("pause");
        exit(1);
    }
        
    printf( "\n\tDigite um pequeno texto:\n\t  <ALGUMAS PALAVRAS>\n\n");
    gets(texto);
    fprintf( fp, "%s", texto );
    fprintf( fp, "%c", "\n" );
    fclose(fp);
    
    
    if ( (fp=fopen("text.txt","r")) == NULL)
    {
        printf( "\n\n\tFALHA NA LEITURA DO ARQUIVO\n" );
        printf( "Por favor, tente outra vez.\n\n");
        system("pause");
        exit(1);
    }else{
        printf( "\n\n\tSUCESSO NA LEITURA DO ARQUIVO\n" );
    }   
    
    rewind(fp);
    
    for ( i=0; i<32; i++){
        
        fscanf( fp, "%c", &aux );
        if ( isalpha(aux) ){
            cont1++;
        }    
        if( isascii(aux) ){
            cont2++;
        }else{    
            printf( "\n" );
            system("pause");
            break;
            
        }                            
        
    }        
    
    printf( "\n\n\tVoce digitou %d letras(s).\n", cont1);
    printf( "\n\n\tVoce digitou %d caractere(s).\n", cont2);
    printf( "\t Contando com os espacos.\n\n" );
    printf( "\n\t\tFIM DE PROGRAMA\n\n" );
    
    free(texto);
    fclose(fp);
    system("pause");
    return 0;
    
}
    


