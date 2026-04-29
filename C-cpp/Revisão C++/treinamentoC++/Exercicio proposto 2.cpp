#include <stdio.h>

struct Complexo{
	float real, imaginario;
};

void soma_complexo(struct Complexo *, struct Complexo *);
void multiplicacao_complexo(struct Complexo *, struct Complexo *);

main(){
	struct Complexo n1, n2;
	
	scanf("%f", &n1.real);
	scanf("%f", &n1.imaginario);
	scanf("%f", &n2.real);
	scanf("%f", &n2.imaginario);
	
	soma_complexo(&n1, &n2);
	multiplicacao_complexo(&n1, &n2);
	
	return 0;
}

void soma_complexo (struct Complexo *a, struct Complexo *b){
	printf ("\nO resultado da soma dos complexos eh: %.2f + j%.2f\n", (a->real)+(b->real), (a->imaginario)+(b->imaginario));
}
void multiplicacao_complexo(struct Complexo *c, struct Complexo *d){
	printf ("\nO resultado da multiplicacao dos complexo eh: %.2f + j%.2f\n",(c->real)*(d->real)-(c->imaginario)*(d->imaginario), (c->imaginario)*(d->real)+(c->real)*(d->imaginario));
}

