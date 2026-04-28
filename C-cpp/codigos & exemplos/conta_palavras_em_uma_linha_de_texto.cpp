/* Universidade Federal da Paraíba
Departamento de Sistemas e Computação
Programa para a disciplina <Introdução á Programação> - 2001.1
Objetivo: Contar palavras de uma linha de texto*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define MAXLINHA 85

#define BRANCO ' '

#define NULO '\0'


int main(void) {
     char linha[MAXLINHA];
     int indice, contador;

     printf("\nDigite a linha de texto a ser processada: \n");
     gets(linha);

     if(strlen(linha) > 0)
         contador = 1;
     else 
         contador = 0;
     
     for(indice = 0; linha[indice] != NULO; indice++)
         if(linha[indice] == BRANCO)
              contador++;

     printf("\nNumero de palavras: %d", contador);
     getch();
}

