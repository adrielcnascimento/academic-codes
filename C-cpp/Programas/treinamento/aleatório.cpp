#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
   
   int dado, vezes, frequencia1 = 0, frequencia2 = 0, frequencia3 = 0,
   frequencia4 = 0, frequencia5 = 0, frequencia6 = 0;
   
   srand(time(NULL));
   for(vezes = 1; vezes <= 1000; vezes++){
       dado = rand() % 6  + 1;
       printf("%d\n", dado);
       printf("\n");
       
       switch (dado){
           case 1:
               frequencia1++;
               break;
           case 2:
                frequencia2++;
                break;            
           case 3:
                frequencia3++;
                break; 
           case 4:
                frequencia4++;
                break;
           case 5:
                frequencia5++;
                break;
           default:
                frequencia6++;
                break;
       }
   }
   
   printf("O numero 1 aparece %d vezes\n", frequencia1);
   printf("O numero 2 aparece %d vezes\n", frequencia2);
   printf("O numero 3 aparece %d vezes\n", frequencia3);
   printf("O numero 4 aparece %d vezes\n", frequencia4);
   printf("O numero 5 aparece %d vezes\n", frequencia5);
   printf("O numero 6 aparece %d vezes\n", frequencia6);
   
   printf("\n");
   system("pause");
   return 0;
}
