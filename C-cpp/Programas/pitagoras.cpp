#include <stdio.h>
#include <stdlib.h>

main()
{
      int cateto1, cateto2, hipotenusa, numero;
      
      printf("%s%17s%17s\n", "Cateto 1", "Cateto 2", "Hipotenusa");
      
      for(cateto1 = 3; cateto1 <= 30; cateto1 += 3){
          for(cateto2 = 4; cateto2 <= 40; cateto2 += 4){
              for(numero = 5; numero <= 50; numero += 5){
                 hipotenusa = cateto1 * cateto1 + cateto2 * cateto2;
                 if(hipotenusa / numero == numero)
                      printf("%d%17d%17d\n", cateto1, cateto2, numero);
              }
          }
      }

system("pause");
return 0;
}
