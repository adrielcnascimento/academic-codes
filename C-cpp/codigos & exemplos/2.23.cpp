/*O MAIOR E O MENOR DE 5 INTEIROS*/
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num1, num2, num3, num4, num5;
    
    printf ("Digite 5 inteiros\n");
    scanf ("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    //escolha do maior
    if (num1 > num2){
      if (num1 > num3)
        if (num1 > num4)
          if (num1 > num5)
          printf ("O maior eh %d\n", num1);
    }
    if (num2 > num1){
      if (num2 > num3)
        if (num2 > num4)
          if (num2 > num5)
          printf ("O maior eh %d\n", num2);
    }
    if (num3 > num1){
      if (num3 > num2)
        if (num3 > num4)
          if (num3 > num5)
          printf ("O maior eh %d\n", num3);
    }
    if (num4 > num1){
      if (num4 > num2)
        if (num4 > num3)
          if (num4 > num5)
          printf ("O maior eh %d\n", num4);
    }
    if (num5 > num1){
      if (num5 > num2)
        if (num5 > num3)
          if (num5 > num4)
          printf ("O maior eh %d\n", num5);
    }
    // escolha do menor    
    if (num1 < num2){
      if (num1 < num3)
        if (num1 < num4)
          if (num1 < num5)
          printf ("O menor eh %d\n", num1);
    }
    if (num2 < num1){
      if (num2 < num3)
        if (num2 < num4)
          if (num2 < num5)
          printf ("O menor eh %d\n", num2);
    }
    if (num3 < num1){
      if (num3 < num2)
        if (num3 < num4)
          if (num3 < num5)
          printf ("O menor eh %d\n", num3);
    }
    if (num4 < num1){
      if (num4 < num2)
        if (num4 < num3)
          if (num4 < num5)
          printf ("O menor eh %d\n", num4);
    }
    if (num5 < num1){
      if (num5 < num2)
        if (num5 < num3)
          if (num5 < num4)
          printf ("O menor eh %d\n", num5);
    }
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
