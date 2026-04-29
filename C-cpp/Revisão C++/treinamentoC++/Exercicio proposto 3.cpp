#include <stdio.h>

struct Conta{
	char *nome_do_cliente;
	float saldo;
};

void inserir_nome(struct Conta *);
void consultar_saldo(struct Conta *);
void depositar(struct Conta *);

main(){
	struct Conta user1;
	
	inserir_nome(&user1);
	
	return 0;
}

void inserir_nome(struct Conta *a){
	gets(a->nome_do_cliente);
}

void consultar_saldo(struct Conta *b){
}


