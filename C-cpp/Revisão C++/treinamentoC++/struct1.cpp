//ALUNO: ZÓZIMO PEREIRA GUEDES DA SILVA
//MATRÍCULA: 114110615
//DISCIPLINA: TÉCNICAS DE PROGRAMAÇÃO

#include <iostream>
#include <string>
#include <sstream>

#define  QUANT 11

using namespace std;

struct Filmes {
  string titulo;
  int ano;
};

void ExibeFilme(Filmes filme); // Função para imprimir f1 e f2

int main ()
{
	
	int i=1,option, aux;
	
	Filmes f[QUANT];

  	f[0].titulo = "O Expresso Polar";
  	f[0].ano = 2004;
  	
	while((i<QUANT)&&(option!=1)){
		cout << "Digite o titulo: ";
  		cin >> f[i].titulo;  
  		cout << "Digite o ano: ";
  		cin >> f[i].ano;    
  		aux = i;
  		if(i!=(QUANT-1)){
	  		do{
  			cout << "\nPARA ENCERRAR A LISTA DIGITE 1"<< endl;
  			cout << "PARA CONTINUAR A LISTA DIGITE 2"<<endl;
  			cin >> option;
  			if((option!=1)&&(option!=2))
  				cout << "OPÇÃO INVALIDA!\n\n";
  			cout << "\n";
  			} while((option!=1)&&(option!=2));
  		}
  	++i;
	}
	
  	cout << "O primeiro filme configurado na base foi: " << endl;
  	ExibeFilme(f[0]);
  	
  	for(i=1;i<=aux;i++){
  		cout << "O filme " << i << " digitado foi: " << endl;
  		ExibeFilme(f[aux]);
  	}
  
  	return 0;
}

void ExibeFilme(Filmes filme)
{
  cout << filme.titulo;
  cout << " (" << filme.ano << ")" << endl;
}
