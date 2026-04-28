#ifndef CARRO_H

class carro : public veiculo{
      private:
              bool temVidroEletrico;
              bool temArCondicionado;
              int numeroDeAirbags;
      public:
             void setTemVidroEletrico(bool);
             void setTemArCondicionado(bool);
              int setNumeroDeAirbags(int);
              
              bool getTemVidroEletrico();
              bool getTemArCondicionado();
               int getNumeroDeAirbags();
};
