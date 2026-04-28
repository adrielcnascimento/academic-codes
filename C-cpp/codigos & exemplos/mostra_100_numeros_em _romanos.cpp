/*programa le mostra de um até 100 em romanos*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num, dezena, unidade;
    
    printf ("digite um numero  até 100\n");
    
    for (num = 1; num <= 100; num++){
        printf ("\nO valor desse numero em romanos eh:   ");
    
        dezena = (num % 100) / 10;
        unidade = num %10;
    
        if (num == 100)
           printf ("C");
        else {
         //as dezenas
         if (dezena == 1)
            printf ("X");
         
         if (dezena == 2)
            printf ("XX");
            
         if (dezena == 3)
            printf ("XXX");
            
         if (dezena == 4)
            printf ("XL");   
         
         if (dezena == 5)
            printf ("L");
         
         if (dezena == 6)
            printf ("LX");
         
         if (dezena == 7)
            printf ("LXX");
         
         if (dezena == 8)
            printf ("LXXX");
         
         if (dezena == 9)
            printf ("XC");
         //Agoras as unidades
         if (unidade == 1)
            printf ("I");
         
         if (unidade == 2)
            printf ("II");
            
         if (unidade == 3)
            printf ("III");
            
         if (unidade == 4)
            printf ("IV");   
         
         if (unidade == 5)
            printf ("V");
         
         if (unidade == 6)
            printf ("VI");
         
         if (unidade == 7)
            printf ("VII");
         
         if (unidade == 8)
            printf ("VIII");
         
         if (unidade == 9)
            printf ("IX");    
    
    }
     printf ("\n");
    }
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
