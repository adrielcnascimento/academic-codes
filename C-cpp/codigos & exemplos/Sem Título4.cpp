#include <stdio.h>
#include <stdlib.h>

int main() {
    int ind, j;
    int array [1000] = {1}; 
    
    for(ind = 0; ind <1000; ind++) 
       printf ("teste 1 \n");
       for(ind = 2; ind < 100 ;ind++){ 
       j = 2;
       printf ("\t\tteste 2 ");
       while(j*ind < 10001)
        j++;
    }
    printf ("\tteste 3\n");
   for(ind = 2; ind < 1000; ind++)
      printf ("\t\tteste 4\n");
      if (array [ind]!= 0)
      printf("%d eh primo.\n", ind);
   
   printf ("\n\n\n");
   system ("pause");
   return 0;
}
