/* O nome do array é o mesmo que &array[0] */
#include <stdio.h>
#include <stdlib.h>

main()
{
      char array[5];
      
      printf("\t\tarray = %p\n\t\t&array[0] = %p\n", array, &array[0]);
      printf("\t\tarray = %d\n\t\t&array[0] = %d\n", array, &array[0]);
      printf("\n\n");
      system("pause");
      return 0;
}
