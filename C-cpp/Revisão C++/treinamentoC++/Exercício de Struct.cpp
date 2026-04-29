#include <iostream>
#include <iostream>

using std::cout;
using std::endl;

struct Conta{
	char nome[40], endereco[40];
	float saldo;
	//unsigned long int cpf;
	//unsigned int dia:5;
	//unsigned int mes:4;
	//unsigned int ano:11;
};

void get_name(Conta);
void read_name(Conta);
/*void get_adress(Conta);
void read_adress(Conta);
void get_saldo(Conta);
float read_saldo(Conta);
void get_cpf(Conta);
void read_cpf(Conta);
void get_data(Conta);
void read_data(Conta);
*/

main(){
	
	struct Conta guedes;
	get_name(guedes);
	read_name(guedes);
	
	return 0;
}

void get_name(Conta user){
	std::cin.get (user.nome,40);
}


void read_name(Conta user){
	cout << user.nome;
}

