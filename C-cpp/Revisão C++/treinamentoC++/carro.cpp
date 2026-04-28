#include "carro.h"

void Carro::setCilindradas(bool _temVidroEletrico){
   temVidroEletrico = _temVidroEletrico;
}

void Carro::setTemArCondicionado(bool _temArCondicionado){
   temArCondicionado = _temArCondicionado;
}

void Carro::setNumeroDeAirbags(int _numeroDeAirbags){
   numeroDeAirbags = _numeroDeAirbags;
}

bool Carro::getTemVidroEletrico(){
      return temVidroEletrico;
}

bool Carro::getTemPartidaEletrica(){
      return temPartidaEletrica;
}

int Carro::getNumeroDeAirbags(){
      return numeroDeAirbags;
}
