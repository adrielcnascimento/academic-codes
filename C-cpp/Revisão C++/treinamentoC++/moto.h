#ifndef MOTO_H
class moto : public veiculo{
      private:
              float cilindradas;
              bool temPartidaEletrica;
      public:
             void setCilindradas(float);
             void setTemPartidaEletrica(bool);
             
             float getCilindradas();
             bool  getTemPartidaEletrica();
};

#endif
