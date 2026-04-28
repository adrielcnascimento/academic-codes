#include<iostream.h>

int main(){
    
    cout << "digite valores (zero para finalizar)\n:";
    float soma = 0;
    
    while(true){
       float valor;
       cin >> valor;
       if(valor == 0)
          break;
       soma += valor;
       }
       
       cout << "\n" << soma << "\n";
       system("pause");
       return 0;
       }                
