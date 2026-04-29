#include <stdio.h>

struct Racional{
	int num, den;
};

void soma(struct Racional *, struct Racional *);
void subtracao(struct Racional *, struct Racional *);
void multiplicacao(struct Racional *, struct Racional *);
void divisao(struct Racional *, struct Racional *);

main(){

	struct Racional r1, r2;
	
	scanf ("%d", &r1.num);
	scanf ("%d", &r1.den);
	scanf ("%d", &r2.num);
	scanf ("%d", &r2.den);
	
	soma (&r1, &r2);
	subtracao (&r1, &r2);
	multiplicacao (&r1, &r2);
	divisao (&r1, &r2);
	
	return 0;	
}

void soma (struct Racional *a1, struct Racional *a2){
	printf("O resultado da soma eh: %d/%d\n", (a1->num)*(a2->den)+(a1->den)*(a2->num), (a1->den)*(a2->den));
}

void subtracao(struct Racional *b1, struct Racional *b2){	
	printf("O resultado da soma eh: %d/%d\n", (b1->num)*(b2->den)-(b1->den)*(b2->num), (b1->den)*(b2->den));
}

void multiplicacao (struct Racional *c1, struct Racional *c2){
	printf("O resultado da multiplicacao eh: %d/%d\n", (c1->num)*(c2->num), (c1->den)*(c2->den));
}

void divisao(struct Racional *d1, struct Racional *d2){
	printf("O resultado da divisao eh: %d/%d\n", (d1->num)*(d2->den), (d1->den)*(d2->num));
}


