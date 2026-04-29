#include <stdio.h>
#include <stdlib.h>

int main ()
{
    system("color 3a");
    int escolha;
    float x, y, z;
    
    printf ("***** *****  *     ****** *    *  *      ******  ******* ******  ******\n");
    printf ("*     *   *  *     *      *    *  *      *    *     *    *    *  *    *\n");
    printf ("*     *****  *     *      *    *  *      * ****     *    *    *  *  *\n");
    printf ("***** *   *  ***** ****** ******  ****** *    *     *    ******  *    *\n\n\n\n");
    
           
    printf ("Escolha a operacao a ser realizada, (1 = Adicao, 2 = Subtracao, \n3 = Multiplicacao e 4 = Divisao), ou digite qualquer outra tecla pra sair: ");
    scanf ("%d", &escolha);
    
    while (escolha>4, escolha<0)
    {
          printf ("Valor digitado nao aceito, tente novamente ((1 = Adicao, 2 = Subtracao, \n3 = Multiplicacao e 4 = Divisao): ");
          scanf ("%d", &escolha);
          }
          
    if (escolha==1)
    {
          printf ("\n\nDigite o primeiro valor: ");
          scanf ("%f", &x);
          printf ("Digite o segundo valor a ser somado: ");
          scanf ("%f", &y);
          z=x+y;
          printf ("\n\nO valor da soma e %.2f", z);
          printf ("\n\nEscolha a operacao a ser realizada, (1 = Adicao, 2 = Subtracao, \n3 = Multiplicacao e 4 = Divisao), ou digite qualquer outra tecla pra sair: ");
          scanf ("%d", &escolha);         
          
          }
          
    if (escolha==2)
    {
          printf ("\n\nDigite o primeiro valor: ");
          scanf ("%f", &x);
          printf ("Digite o segundo valor a ser subtraido: ");
          scanf ("%f", &y);
          z=x-y;
          printf ("\n\nO valor da subtracao e %.2f", z);
          printf ("\n\nEscolha a operacao a ser realizada, (1 = Adicao, 2 = Subtracao, \n3 = Multiplicacao e 4 = Divisao), ou digite qualquer outra tecla pra sair: ");
          scanf ("%d", &escolha);
          }
          
    if (escolha==3)
    {
          printf ("\n\nDigite o primeiro valor: ");
          scanf ("%f", &x);
          printf ("Digite o segundo valor a ser multiplicado: ");
          scanf ("%f", &y);
          z=x*y;
          printf ("\n\nO valor da multiplicacao e %.2f", z);
          printf ("\n\nEscolha a operacao a ser realizada, (1 = Adicao, 2 = Subtracao, \n3 = Multiplicacao e 4 = Divisao), ou digite qualquer outra tecla pra sair: ");
          scanf ("%d", &escolha);
          }
          
    if (escolha==4)
    {
          printf ("\n\nDigite o primeiro valor: ");
          scanf ("%f", &x);
          printf ("Digite o segundo valor a ser dividido: ");
          scanf ("%f", &y);
          z=x/y;
          printf ("\n\nO valor da multiplicacao e %.2f", z);
          printf ("\n\nEscolha a operacao a ser realizada, (1 = Adicao, 2 = Subtracao, \n3 = Multiplicacao e 4 = Divisao), ou digite qualquer outra tecla pra sair: ");
          scanf ("%d", &escolha);
          }

        
         printf ("\n\nPrograma finalizado\n");
         
         
system("pause");
return 0;

}
          
    
                   
          
        
          
    
    
    
    
