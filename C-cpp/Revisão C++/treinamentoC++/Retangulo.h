#ifndef RETANGULO_H
#define RETANGULO_H

struct Ponto{
       float x;
       float y;
};

class Retangulo{
          Ponto vA;
          Ponto vB;
          Ponto vC;
          Ponto vD;
          float d(Ponto p1, Ponto p2);
          bool checarVertice(Ponto p);
      public:
          float comprimento();
          float largura();
          float area();                    
          Retangulo(Ponto, Ponto, Ponto, Ponto);
          bool verificaCoordenadas(Ponto, Ponto, Ponto, Ponto);
          bool ehQuadrado();
};

#endif
