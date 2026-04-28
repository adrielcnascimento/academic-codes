#include<iostream.h>

void troca(int &,int &);

int main(){
    
   int x=1,y=2;
   
   cout << "antes: x=" << x << ", y=" << y <<endl;
   
   troca(x,y);
   
   cout << "depois: x=" << x << ", y=" << y << endl;
   
   system("pause");
   
   return 0;
}

void troca(int &a, int &b){
     int x;
     x=a;
     a=b;
     b=x;
     }
