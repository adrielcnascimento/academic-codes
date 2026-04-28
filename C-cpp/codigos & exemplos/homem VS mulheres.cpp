

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
int num_mulheres, num_homens;

printf ("Digite os numeros de alunos homens e mulheres respectivamente:\n");
scanf ("%d %d", &num_homens, &num_mulheres);

if (num_mulheres < num_homens){
   printf ("Tem muito homen nisso\n");
else  (num_mulheres > num_homens)
        printf ("Eba tem muita mulher\n");
}
if  ( num_mulheres == num_homens)
           printf ("Tudo bacana , um pra cada um\n");
printf ("\n\n\n");
system ("pause");
return 0;
}
