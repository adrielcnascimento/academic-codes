#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main (void){
      int i, j;
      
      for(i = 1; i <= 10; i++){
            for(j = 1; j <= 10; j++){
                printf("*");
                Beep(8500, 100);
                //Sleep(50);
            }
            printf("\n");
      }
      printf("\n\n");
      system("pause");
      return 0;
}
