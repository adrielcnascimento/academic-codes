
/*
  Name: Desafio Luiza
  Copyright: none
  Author: Adriel Cassimiro do Nascimento
  Date: 01/07/10 00:48
  Description: Recebe N numeros e mostra o maior e o menor deles
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main (void){
    int tam, ind, menor, maior, numero [MAX] = {0};
    
    system ("color d");
    printf ("Le N numeros e mostra o maior e o menor \n");
    printf ("Digite quantos numeros voce vai testar no maximo %d \n", MAX);
    scanf  ("%d", &tam);
    
    printf ("Digite o %d.o numero: ", 1);
    scanf ("%d", numero);
    for (ind = 1; ind < tam ; ind ++){
        printf ("Digite o %d.o numero: ", ind + 1);
        scanf  ("%d", &numero[ind]);
        
    }
    
    maior = numero [0];//AQUI O MAIOR É O PRIMEIRO ELEMENTO MAS AINDA VAI COMPARA COM OS DEMAIS
    for (ind = 1; ind < tam; ind ++)
        if (numero[ind] > maior)
           maior = numero [ind];
           
    printf ("\nO maior numero lido eh = %d \n", maior);
    
    menor = numero [0];//AQUI O MENOR É O PRIMEIRO ELEMENTO MAS AINDA VAI COMPARA COM OS DEMAIS
    for (ind = 1; ind < tam; ind ++)
        if (numero [ind] < menor)
           menor = numero [ind];
    printf ("\nO menor eh = %d \n", menor);
    
    printf ("Programa feito por Adriel  Cassimiro\n");
    printf ("Finalizado em: ");
    system ("date/t");
    printf ("as ");
    system ("time/t");
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
