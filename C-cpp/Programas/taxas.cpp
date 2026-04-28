/* Questão 5.9 Deitel                                                         */

#include <stdio.h>
#include <stdlib.h>

float calcula_Taxas (float); /* protótipo da função*/
main()
{
      float tempo, tempo1, tempo2, tempo3, taxa1, taxa2, taxa3;
      
      printf("\t\t***ESTACIONAMENTO***\n\n");
      printf("Um estacionamento cobra 2 reais para seus clientes estacionarem\n");
      printf("seus carros por ate 3 horas. Se o tempo em que os carros estiverem\n");
      printf("estacionados for maior do que 3 horas, será cobrado 0.50 reais a mais\n");
      printf("por hora. O tempo maximo (24 horas) custa 10 reais. Calcule a taxa de 3\n");
      printf("clientes que estacionaram seus carros ontem\n");
      system("pause");
      system("cls");
      
      printf("Digite o tempo do cliente 1:\n");
      scanf("%f", &tempo);
      tempo1 = tempo;
      taxa1 = calcula_Taxas(tempo);
      printf("\n");
      
      if(calcula_Taxas(tempo) == 0){
          printf("Tempo invalido!\n");
          system("pause");
          system("cls");
          printf("Digite o tempo do cliente 1:\n");
          scanf("%f", &tempo);
          tempo1 = tempo;
          taxa1 = calcula_Taxas(tempo);
          printf("\n");
      }
      printf("Digite o tempo do cliente 2:\n");
      scanf("%f", &tempo);
      tempo2 = tempo;
      taxa2 = calcula_Taxas(tempo);
      printf("\n");
      
      if(calcula_Taxas(tempo) == 0){
          printf("Tempo invalido!\n");
          system("pause");
          system("cls");
          printf("Digite o tempo do cliente 2:\n");
          scanf("%f", &tempo);
          tempo2 = tempo;
          taxa2 = calcula_Taxas(tempo);
          printf("\n");
      }
                              
      printf("Digite o tempo do cliente 3:\n");
      scanf("%f", &tempo);
      tempo3 = tempo;
      taxa3 = calcula_Taxas(tempo);
      printf("\n\n");
      
      if(calcula_Taxas(tempo) == 0){
          printf("Tempo invalido!\n");
          system("pause");
          system("cls");
          printf("Digite o tempo do cliente 3:\n");
          scanf("%f", &tempo);
          tempo3 = tempo;
          taxa3 = calcula_Taxas(tempo);
          printf("\n");
      }
      printf("\tCliente\t\tHoras\t\tTaxa\n");
      printf("\t1\t\t%.1f\t\t%.2f\n", tempo1, taxa1);
      printf("\t2\t\t%.1f\t\t%.2f\n", tempo2,taxa2);
      printf("\t3\t\t%.1f\t\t%.2f\n", tempo3, taxa3);
      printf("\tTOTAL\t\t%.1f\t\t%.2f\n", tempo1 + tempo2 + tempo3, 
      taxa1 + taxa2 + taxa3);     
      printf("\n\n");
      
      system("pause");
      return 0;
}
float calcula_Taxas (float tempo)     /* definição da função */ 
{
      while(tempo <= 24){
          if(tempo <= 3)
              return 2;
          else if(tempo > 3 && tempo < 19)
              return 2 + (tempo - 3) * 0.5;
          else
              return 10;      
      }
      return 0;
}
