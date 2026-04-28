#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
 
int main(){
    
    int nivel[11];
    int j,i, soma,a;
    float f = -1.22345;
    
    
    for(int j=0; j<=10;j++)
      nivel[j]=-1;

    for(i =0; i<=10;i++)  

    printf(" %d \n",nivel[i]);
a=(sqrt(16)+pow(4,2))/2;
printf(" %d %f\n",a,abs(f));

   system("pause");
   return 0;
}    
