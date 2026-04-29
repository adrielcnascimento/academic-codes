#ifndef VEICULO_H

class veiculo{
      private:
              char modelo[35];
              int num_pneus;
              float pressao_pneus;
      public:
              void setModelo(char _modelo[35]);
              void setNumPneus(int _num_pneus);
              void setPressaoPneus(float pressao);
              
              char* getModelo();
              int  getNumeroDePneus();
              float getPressao();
};

#endif
