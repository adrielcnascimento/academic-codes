#include <stdio.h>
#include <stdlib.h>

main()
{
      static int contagem = 1;
      contagem++;
      printf("%d\a ", contagem);
      main();
      return 0;
}
      
