#include <stdio.h>
#include <stdlib.h>
// inclua aqui as definicoes do vetor de bits
int main() {
    BitVector *B;
    int i,j;
    B = bitv_cria(10001); // bits 0..10000
    for(i=0;i<10001;i++) bitv_set(B,i,1); // todo mundo eh primo
    for(i=2;i<100;i++) { // 100 = raiz de 10000
// marca todos os multiplos de i como nao-primos
   j = 2;
   while(j*i < 10001) {
   bitv_set(B,j*i,0);
   j++;
   }
}
// imprime todos os primos de 2 a 10000
   for(i=2;i<10001;i++)
       if (bitv_get(B,i)!=0)
       printf("%d eh primo.\n",i);
   bitv_destroi(B);
   system ("pause");
   return 0;
}
