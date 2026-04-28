/*PROGRAMA PARA MOSTRAR UM TABELA DE POTENCIAS*/
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num, potencia, exp;
    
    printf ("PROGRAMA PARA MOSTRAR UM TABELA DE POTENCIAS\n");
    printf ("NUM\tQUADRADO\tCUBO\t\tEXP = 4\t\tEXP = 5\n\n");
    
    
    for (num = 0; num <= 50; num ++){
        potencia = num;
        printf ("%d\t  ", num);   
        exp = 0; 
        
        while(exp <= 3){
            potencia *= num;
            printf ("%d\t\t ", potencia);
             exp ++;
        }
        printf ("\n");
    }
    
    printf ("\n\n\n");
    system ("pause>>null");
    return 0;
}
