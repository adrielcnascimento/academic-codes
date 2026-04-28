#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define NUM_FIG 3

void mostra_menu(char *[]);
void mostra_area_figura(char *, float(*)(float, float), float, float);
float quadrado(float, float);
float retangulo(float, float);
float triangulo(float, float);

int main() {
    int figura;
    char *nome[NUM_FIG] = {"quadrado", "retangulo", "triangulo"};
    char *dados[NUM_FIG] = {"o lado", "a base e a altura", "a base e a altura"};
    float (*calcula_area[NUM_FIG])(float, float) = {quadrado, retangulo, triangulo};
    float valor1, valor2;

//    clrscr();
    do {
        mostra_menu(nome);
        scanf("%d", &figura);
        switch (figura) {
            case 0:
                printf("\nInforme %s da figura %s: \n", dados[figura], nome[figura]);
                scanf("%f", &valor1);
                break;
            case 1:
            case 2:
                printf("\nInforme %s da figura %s: \n", dados[figura], nome[figura]);
                scanf("%f %f", &valor1, &valor2);
                break;
            default:
                printf("\nCodigo invalido! \n\n");
        }
    }while (figura < 0 || figura > NUM_FIG - 1);
    mostra_area_figura(nome[figura], *calcula_area[figura], valor1, valor2);
    //getchar();
    system("pause");
    return 0;
}

void mostra_menu(char *opcoes[]) {
    int opcao;
    printf("Informe a figura para calculo da area:\n\n");
    for (opcao = 0; opcao < NUM_FIG; opcao++)
        printf("\t%d - %s\n", opcao, opcoes[opcao]);
    printf("\n\t===> ");
}

void mostra_area_figura(char *nome, float(*calc_area)(float, float), float v1, float v2) {
    printf("\nA area da figura %s = %f\n\n", nome, (*calc_area)(v1, v2));
}

float quadrado(float lado, float naum_usado) {
    return lado * lado;
}

float retangulo(float base, float altura) {
    return base * altura;
}

float triangulo(float base, float altura) {
    return base * altura / 2;
}
