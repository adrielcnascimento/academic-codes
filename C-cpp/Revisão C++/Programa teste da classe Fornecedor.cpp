#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Pessoa{
      protected:
                string nome;
                string endereco;
                int cpf;
                int data_nascimento;
      public:
             Pessoa();
             void le_nome(string);
             string retorna_nome()const;
             void le_cpf(int);
             int retorna_cpf()const;
             void ler_endereco(string);
             string retorna_endereco()const;
             void le_data_nascimento(int);
             int retorna_data_nascimento()const;
};

Pessoa::Pessoa(){
      nome="  ";
      endereco="  ";
      cpf=0;
      data_nascimento=0;
}
void Pessoa::le_nome(string nom){
      nome=nom;
}
string Pessoa::retorna_nome()const{
       return nome;
}
void Pessoa::le_cpf(int num){
      cpf=num;
}
int Pessoa::retorna_cpf()const{
      return cpf;
}
void Pessoa::ler_endereco(string end){
      endereco=end;
}
string Pessoa::retorna_endereco()const{
       return endereco;
}
void Pessoa::le_data_nascimento(int data){
     data_nascimento=data;
}
int Pessoa::retorna_data_nascimento()const{
    return data_nascimento;
}

class Fornecedor:public Pessoa{
      private:
                float plafond;
                float valor_em_divida;                
      public:
             Fornecedor();
             void le_plafond(float);
             float retorna_plafond()const;
             void le_valor_em_divida(float);
             float retorna_valor_em_divida()const;
             float obter_saldo()const;
};

Fornecedor::Fornecedor(){
          Pessoa();                 
          plafond=0;
          valor_em_divida=0;  
}

void Fornecedor::le_plafond(float valor){
          plafond=valor;
}
                        
float Fornecedor::retorna_plafond()const{
          return plafond;
}

void Fornecedor::le_valor_em_divida(float valor){
          valor_em_divida=valor;
}

float Fornecedor::retorna_valor_em_divida()const{
          return valor_em_divida;
}

float Fornecedor::obter_saldo()const{
          return (plafond - valor_em_divida);
}


int main(){
    
    Fornecedor fornecedor_1[10];
    int cont, num, nascimento;
    float cred, divida;
    string nome, endereco;
    
    system("cls");
    cont=1;
    
    cout<<endl<<endl<<"Digite o nome do fornecedor sem espacos:\t"<<endl;
    cin>>nome;
    fornecedor_1[cont].le_nome(nome);
    
    cout<<endl<<"Digite o cpf do fornecedor:\t"<<endl;
    cin>>num;
    fornecedor_1[cont].le_cpf(num);
    
    cout<<endl<<"Digite o endereco do fornecedor sem espacos:\t"<<endl;
    cin>>endereco;
    fornecedor_1[cont].ler_endereco(endereco);
    
    cout<<endl<<"Digite a data de nascimento do fornecedor:\t"<<endl;
    cin>>nascimento;
    fornecedor_1[cont].le_data_nascimento(nascimento);
    
    cout<<endl<<"Agora indique o valor de credito desse fornecedor:\t"<<endl;
    cin>>cred;
    fornecedor_1[cont].le_plafond(cred);
    
    cout<<endl<<"Agora indique o valor da divida que o fornecedor possui:\t"<<endl;
    cin>>divida;
    fornecedor_1[cont].le_valor_em_divida(divida);
    
    system("cls");
    cout<<endl<<"Os dados deste fornecedor sao:"<<endl;
    cout<<"nome:  "<<fornecedor_1[cont].retorna_nome()<<endl;
    cout<<"cpf:  "<<fornecedor_1[cont].retorna_cpf()<<endl;
    cout<<"endereco:  "<<fornecedor_1[cont].retorna_endereco()<<endl;
    cout<<"data nascimento:  "<<fornecedor_1[cont].retorna_data_nascimento()<<endl;
    cout<<"credito:  "<<fornecedor_1[cont].retorna_plafond()<<endl;
    cout<<"divida:  "<<fornecedor_1[cont].retorna_valor_em_divida()<<endl;
    cout<<"saldo:  "<<fornecedor_1[cont].obter_saldo()<<endl;
    
    cout<<endl<<endl<<endl;
    system("pause");
    return 0;
}
    
    
    
    
    
    
    
    
    
