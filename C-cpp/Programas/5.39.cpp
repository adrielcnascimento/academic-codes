/* Questão 5.39 ==> Deitel                                                    */
#include <stdio.h>
#include <stdlib.h>

void hanoi(int, char, char, char); /* protótipo da função */

main(){
       int n;
       
       printf("Digite o numero de discos:\n");
       scanf("%d", &n);
       
       printf("\n\n");
       
       hanoi(n, 'A', 'C', 'B');
       printf("\n\n");
       
       system("pause");
       return 0;
}
/* definição da função */
void hanoi(int n, char origem, char destino, char auxiliar)
{
     if(n == 1)
         printf("Mova disco %d do pino %c para o pino %c\n", n, origem, destino);
     else{
          hanoi(n - 1, origem, auxiliar, destino);
          printf("Mova disco %d do pino %c para o pino %c\n", n, origem, destino);
          hanoi(n - 1, auxiliar, destino, origem);
     }
}
