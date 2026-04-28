
/* Encontrando Números Primos usando o Crivo de Eratóstenes */

#include <stdio.h> 
#include <stdlib.h>

int main (void){
    int num [1000] , i, j;

  
 for (i = 0; i <= 999; i ++) /* Num Preencher com os primeiros 100 números */
      num [i] = i + 1; 

      for ( i= 1 ;i<= 999 ;i++ ){ 
          if ( num [ i ] != 0 ) {
             for ( j= ( i+ 1 ) ;j<= 999 ; j++ ){ 
                 if ( num [ j ] != 0 ){ 
                 if ( (num [j] % num [i]) == 0 ) /*check if num[j]*/
                num [j] = 0; /* é um múltiplo de num [i] */

/* Se for um múltiplo, em seguida, configurá-lo para 0 */
             } 

             } 
} 

}
int conta_primo = 0;
for (i = 0; i <= 998; i ++){
    if ( num [i] != 0 ) /*Print all non zero numbers (prime numbers)*/ 
    printf (" \n %d" ,num [i]);
    conta_primo++; 
}
printf ("\n\n%d", conta_primo);
system ("pause");
return 0;
}

 
