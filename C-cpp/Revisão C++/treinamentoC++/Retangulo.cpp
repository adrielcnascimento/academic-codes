   Classe com as caracteristicas para se trabalhar com um Retangulo.
*/
#include "Retangulo.h"
#include <iostream>
#include <math.h>
using namespace std;


Retangulo::Retangulo(Ponto _vA, Ponto _vB, Ponto _vC, Ponto _vD){
  verificaCoordenadas(_vA, _vB, _vC, _vD);
}

bool Retangulo::verificaCoordenadas(Ponto _vA, Ponto _vB, Ponto _vC, Ponto _vD){
     //testando se todas s coordenadas estao no primeiro quadrante
     if (checarVertice(_vA) && checarVertice(_vB) && checarVertice(_vC) && checarVertice(_vD)) {
        //a maior distancia vai ser uma diagonal, depois comparamos se os lados sao iguais tb
        if (d(_vA, _vC) == d(_vD, _vB)  &&  d(_vA, _vD) == d(_vC, _vB))
            if (d(_vA, _vC) != d(_vA, _vD))//essa condicao realmente verifica se eh um retangulo e nao um quadrado
               return 1;
        if (d(_vA, _vB) == d(_vC, _vD)  &&  d(_vA, _vC) == d(_vB, _vD))
            return 1;
     }
     
     return 0;
}

bool Retangulo::checarVertice(Ponto p){
     return (p.x > 0 && p.x <= 15) && (p.x > 0 && p.y <= 15);
}

bool Retangulo::ehQuadrado(){
     return d(vA, vB) == d(vD, vC) == d(vD, vA) == d(vC, vB);
}

float Retangulo::comprimento(){
      if (!verificaCoordenadas(vA, vB, vC, vD))
         return 0;
         
      //se for mesmo um retangulo, vamos calcular o comprimento selecionando a menor das distancias
      if (d(vA, vD) <= d(vD, vC))
         return d(vA, vD);
      else 
         return d(vD, vC);
}

float Retangulo::largura(){
      if (!verificaCoordenadas(vA, vB, vC, vD))
         return 0;
         
      //se for mesmo um retangulo, vamos calcular a largura selecionando a maior das distancias
      if (d(vA, vD) >= d(vD, vC))
         return d(vA, vD);
      else 
         return d(vD, vC);
}


float Retangulo::area(){
      if (!verificaCoordenadas(vA, vB, vC, vD))
         return 0;
      
      //a maior distancia vai ser uma diagonal, depois comparamos se os lados sao iguais tb
      if (d(vA, vC) == d(vD, vB)  &&  d(vA, vD) == d(vC, vB)){
         if (d(vA, vC) >= d(vA, vD))
               return d(vA, vC) * d(vA, vD);
         if (d(vA, vB) >= d(vC, vD)  &&  d(vA, vC) == d(vB, vD))
               return d(vA, vB) * d(vC, vD);
      }
      
      return 0;
}



float Retangulo::d(Ponto p1, Ponto p2){
      return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
