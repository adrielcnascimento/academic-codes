#include<iostream.h>

int n = 10;

int main(){

   int n = 20;  
   
   {
       int n = 30;
       ::n++; //altera variavel global
       cout << ::n  << " " << n << endl;
       
       }
       
       cout << ::n  << " " << n << endl;
       
       system("pause"); 
       
       return 0;
       } 
    
