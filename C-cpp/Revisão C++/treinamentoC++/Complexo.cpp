#include "Complexo.h"
#include <iostream>

using namespace std;


Complexo::Complexo(){
  a = 0;
  b = 0;
}

void Complexo::mostraComplexo(){
  cout << a << " + " << b << "i" << endl;
}

void Complexo::setAB(double _a, double _b){
  a = _a;
  b = _b;
}

Complexo Complexo::soma(Complexo comp){
  Complexo c;
  c.a = a + comp.a;
  c.b = b + comp.b;
  
  return c;
}

Complexo Complexo::diferenca(Complexo comp){
  Complexo c;
  c.a = a - comp.a;
  c.b = b - comp.b;  
  return c;
}

Complexo Complexo::multiplicacao(Complexo comp){
  Complexo c;
  c.a = (a * comp.a) - (b * comp.b);
  c.b = (a * comp.b) + (b * comp.a);
  
  return c;
}
