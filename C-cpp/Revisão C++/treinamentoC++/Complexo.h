#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo{
      private:
              double a;
              double b;
      public:
             Complexo();
             
             void mostraComplexo();
             
             void setAB(double, double);
             
             Complexo soma(Complexo);
             
             Complexo diferenca(Complexo);
             
             Complexo multiplicacao(Complexo);
};

#endif
