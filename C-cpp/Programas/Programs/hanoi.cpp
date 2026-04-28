#include <stdio.h>
#include <stdlib.h>
    void hanoi(int n, char origem, char destino, char auxiliar)
     {
 /* mova n discos do pino a para o pino b usando
     o pino c como intermediario                    */    if (n == 1)
      printf("mova disco %d de %c para %c\n", n, origem, destino);
    else
   {
      hanoi(n - 1, origem, auxiliar, destino);                            // H1
      printf("mova disco %d de %c para %c\n", n, origem, destino);
      hanoi(n - 1, auxiliar, destino, origem);                            // H2
    }
 }
 
  int main(void)
  {
    int numDiscos;
    scanf("%d", &numDiscos);
    hanoi(numDiscos, '1', '2', '3');
    // pausa antes do fim
    fflush(stdin);
    getchar();
    return 0;
}
