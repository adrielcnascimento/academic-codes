/* Programa que imprime os digitos de um inteiro da direita para esquerda */
#include <stdio.h>
#include <stdlib.h>
int main () {   

    int numero;   

    printf("Programa que imprime os digitos de um inteiro da direita para a esquerda:\n\n");
    
    printf("Entre com um inteiro nao negativo: ");
    scanf("%d", &numero);       

    printf("\n\nDigitos do numero %d no sentido inverso: ", numero); 
    while(numero > 0){
        printf("%d", numero % 10); /* impressao do digito da direita */
        numero /= 10; /* numero dividido por 10, perdendo um digito na direita */
    } 
         
    printf("\n\n");
    system("pause");
    return 0;
}
