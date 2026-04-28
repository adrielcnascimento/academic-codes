# include <stdio.h>
# include <stdlib.h>
# include <string.h>
//# include <conio.h>
#define MAX_GRUPO 4
#define max 6

typedef struct selecao cadastro;    //grupo montado
struct selecao{
	int codigo;
	char grupo;
    char time[100];
    int vitoria;
	int empate;
	int derrota;
    int pontos;
	cadastro *prox;
};

typedef struct jogo Jogo;
struct jogo{
	int numero;
	int golt1;
	int golt2;
	Jogo *prox;
};

typedef struct aposta Aposta;
struct aposta{
	char nome_apostador[50];
	int cod_apostador;
	int numero;
	int golt1;
	int golt2;
	int pontos_feitos;
};

/*
typedef struct palpite Palpite;
struct palpite{
	int num_partida;
	int qnt_gol_time1;
	int qnt_gol_time2;
};
*/

//prototipação

void salvo();
void func_cadastro();
void menu_principal ();
void menu_cadastrar ();
void menu_bolao ();
void func_bolao();
void func_cadreal();
//void_aposta (void grupo2);
cadastro *inicializa (void);
cadastro *insere (cadastro *c, int x, char grupo1, char nome1[]);
//void imprime (cad_grupo *c);
//void libera (cad_grupo* c);
void cad_grupo (char grupo);
void func_pont();

FILE *fp;
FILE *fp1;

cadastro * inicializa (void){
	return NULL;
}

cadastro *insere (cadastro *c, int x, char grupo1, char nome1[]){
	cadastro *novo = (cadastro*)malloc(sizeof(cadastro));
	novo -> codigo = x;
	novo -> prox = c;
	novo -> grupo = grupo1;
	//strcpy(novo->grupo, grupo1);
	strcpy(novo->time, nome1);
	return novo;
}

typedef struct Pilha_palpite pilha_palpite;
struct Pilha_palpite{
	int n;
	Aposta vet[6];
};

typedef struct Pilha pilha;
struct Pilha{
	int n;
	Jogo vet[6];
};

void InicPilha (pilha_palpite* p){
	p->n = 0; /* inicializa com zero elementos */
}
void InicPilha1 (pilha* p){
	p->n = 0; /* inicializa com zero elementos */
}
                
void Push (pilha *p, Jogo j){
		if (p->n == max){   // capacidade esgotada
			printf("Capacidade da Pilha Estourou.\n");
			exit(1); // aborta o programa - stdlib.h
		}
		// insere elemento na proxima posição livre
		p->vet[p->n] = j;
		p->n++;
}

void Push1 (pilha_palpite *p, Aposta j){
		if (p->n == max){   // capacidade esgotada
			printf("Capacidade da Pilha Estourou.\n");
			exit(1); // aborta o programa - stdlib.h
		}
		// insere elemento na proxima posição livre
		p->vet[p->n] = j;
		p->n++;
}

void salvo (){
	printf ("Cadastro salvo com sucesso!! Tecle <ENTER> para continuar!!");
	getchar();
	//printf("\n\n");
}

int main(){
	int op;
	
	menu_principal ();
	
	
	do{
		scanf("%d", &op);
		switch(op){
			case 1:
				system("cls");
				func_cadastro();
			break;
			case 2:
				system("cls");
				func_cadreal();
			break;
			case 3:
				system("cls");
				func_bolao();
			break;
			case 4:
				system("cls");
				func_pont();
			break;
			case 5:
				//func_sair();
			break;
			case 6:
				system("cls");
				//func_relatorio();
			break;
			case 7:
				//func_sair();
			break;
			default:
				printf("\n\t Opcao invalida! Digite corretamente a opcao desejada!! \n\n");
			break;
		}
		
	}while ( (op>0) && (op<7) && (op!=7)) ;
}

void func_cadastro(){
	char grupo;
	int op_cad, codigo = 0, i = 0, j = 1, h = 0;
	menu_cadastrar ();
	
				
	do{		// limpa a tela
		//system("cls");
		scanf("%d", &op_cad);
		switch(op_cad){
			case 1:
				grupo = 'A';
				fp = fopen ("grupo_A.txt","w");
				fp1 = fopen ("jogos_A_fase1.txt","w");
				
				//fprintf(fp, "\nGRUPO %c \n\n", grupo);
				
				//fprintf(fp1, "\nGRUPO %c \n\n", grupo);

				cad_grupo (grupo);
				
				fclose(fp);
				fclose(fp1);

				salvo ();
				system("cls");
				menu_cadastrar ();
			break;
	
			case 2:
				grupo = 'B';
				cad_grupo (grupo);
		//		salvo ();
			break;

			case 3:
				grupo = 'C';
				cad_grupo (grupo);
		//		salvo ();
			break;

			case 4:
				grupo = 'D';
				cad_grupo (grupo);
		//		salvo ();
			break;

			case 5:
				grupo = 'E';
				cad_grupo (grupo);
		//		salvo ();
			break;

			case 6:
				grupo = 'F';
				cad_grupo (grupo);
		//		salvo ();
			break;

			case 7:
				grupo = 'G';
				cad_grupo (grupo);
		//		salvo ();
			break;
			
			case 8:
				grupo = 'H';
				cad_grupo (grupo);
		//		salvo ();
			break;

			case 9:
				system("cls");
				menu_principal();
				int escolha;
				do{
					scanf("%d",&escolha);

						switch (escolha){
						case 1:
							system("cls");
							func_cadastro();
							break;
						case 2:
							system("cls");
							func_cadreal();
						break;
						case 3:
							system("cls");
							func_bolao();
						break;
						case 4:
							system("cls");
							func_pont();
						break;
						case 5:
							//func_sair();
						break;
						case 6:
							system("cls");
							//func_relatorio();
						break;
						case 7:
							//func_sair();
						break;
						default:
							printf("\n\t Opcao invalida! Digite corretamente a opcao desejada!! \n\n");
						break;
					}
				}while ( (escolha>0) && (escolha<7) && (escolha!=7));

			break;

			default:
				printf("\n\t Opcao invalida! Digite corretamente a opcao desejada!! \n\n");
			break;
		}

	}while ( (op_cad>0) && (op_cad<10) && (op_cad!=10));
}

/*
    struct selecao grupo_a[4];    //grupo a montado
    char jogo_copa[64][200];    //total de jogos da copa
    int i = 0, j = 1, h = 0;
    char entrada[30];

    printf("PROGRAMA COPA DO MUNDO 2010.\n");

    for (i = 0; i < MAX_GRUPO; i++) {    //GRUPO A
        printf("Digite o nome da seleção pertencente ao GRUPO A.\n");
        fgets(entrada, sizeof(entrada), stdin);
        entrada[strlen(entrada)-1] = '\ 0'; // só pra tirar a quebra de linha da string
        strcpy(grupo_a[i].time, entrada);
    }

    printf("\n\n");
    
    for (h = 0; h < 7; h++)    // cada grupo tem 6 jogos
    {
        for (i = 0; i < 3; i++)    //quantidade de jogos de modo que não repita
        {
            for (j = 1; j < 4; j++)    //quantidade de adversários
            {
                strcpy(jogo_copa[h], grupo_a[i].time);
                strcat(jogo_copa[h], " vs ");
                strcat(jogo_copa[h], grupo_a[j].time);
                printf("jogo[%d] = %s\n", h, jogo_copa[h]);
                h++;

            }
        }
    }

    return 0;
}

*/

void cad_grupo (char grupo1){
	char entrada[50], entrada2[100], selecao [100];
	char jogo_copa[64][200], jogo_copa1[200];    //total de jogos da copa
	int op_cad, codigo = 0, i = 0, j = 1, h = 0;
	cadastro * c, *r; /* declara uma lista não inicializada */
	c = inicializa(); /* inicializa lista como vazia */
	
	struct selecao cadastro[4];
	for (i = 0; i < MAX_GRUPO; i++) {    //GRUPO A
		printf("\n\t Digite o nome da selecao pertencente ao GRUPO %c.\n", grupo1);
		fflush(stdin);
		fgets(entrada, sizeof(entrada), stdin);
		entrada[strlen(entrada)-1] = '\0'; // só pra tirar a quebra de linha da string
		strcpy(cadastro[i].time, entrada);
		c = insere (c, codigo, grupo1, entrada);
		fprintf(fp, "%s\n", entrada);
	}
	
	printf ("\n\n\t\t CONFRONTOS DO GRUPO %s - 1a FASE  \n\n", &grupo1); 

	for (h = 0; h < 7; h++)    // cada grupo tem 6 jogos
	{	
		for (i = 0; i < 3; i++)    //quantidade de jogos de modo que não repita
		{
			for (j = i+1; j < 4; j++)    //quantidade de adversários
			{
				if (strcmp(cadastro[i].time, cadastro[j].time)!=0){
					//strcpy(jogo_copa[h], cadastro[i].time);
					//strcat(jogo_copa[h], " vs ");
					//strcat(jogo_copa[h], cadastro[j].time);
					//printf("\n\t\t\t jogo %d \%s \n", h, jogo_copa[h]);
					
					strcpy(jogo_copa1, cadastro[i].time);
					strcat(jogo_copa1, " vs ");
					strcat(jogo_copa1, cadastro[j].time);
					printf("\n\t\t\t jogo %d \%s \n", h + 1, jogo_copa1);

					
					h++;
					
					strcpy(entrada2, jogo_copa1);
					//fflush(stdin);
					//fgets(entrada2, sizeof(entrada2), stdin);
					entrada2[strlen(entrada2)] = '\0'; // só pra tirar a quebra de linha da string
					//strcpy(jogo_copa1[h], entrada2);

					//fwrite(&entrada,sizeof(entrada),1,fp1);
					fprintf(fp1, "Jogo %d - %s \n", h, entrada2);

				}
			}
		}
	}
	//fclose(fp);
	//salvo ();

}

void func_bolao(){
	FILE *fp3;
	FILE *ap;
	int op = 0, op1 = 1, num, i=0;
	Aposta a;
	int qnt=0;
	//Jogo j;
	char aposta_grupo, grupo [200], nome [50];
	int cont, j;

	do{
		system("cls");
		menu_bolao();
		scanf("%d", &op);

		switch(op){
			case 1: 
				num = 1;
				printf("Digite seu nome: \n");
				fflush(stdin);
				gets(nome);
				
				strcpy(a.nome_apostador, nome);

				//fprintf(fp2, "Nome do Apostador: %s \n", a.nome_apostador);
				a.cod_apostador = num;

				//aposta_grupo = 'A';
				
				fp3 = fopen("jogos_A_fase1.txt", "rb");
				fread(&grupo,sizeof(grupo),1,fp3);
				for(j=0;j<strlen(grupo);j++){
						if(grupo[j]=='\n'){
							qnt++;
						}
						if(qnt==6){
							grupo[j]='\0';
							break;
						}
					}
				printf("Jogos A: \n %s", grupo);
				fclose(fp3);

				ap = fopen("aposta_A.txt", "ab+");
					
				//fprintf(fp2, "\nAPOSTAS GRUPO %c \n\n", &aposta_grupo);
								
				//cont = 0;
	
				//	while(!feof(fp3)){
				//		fscanf(fp3, "%c", &str[cont]);
				//		cont++;
					//}
				//	str[cont] = '\0';
				//	printf("%s ", str);
					
				for(i = 1; i < 7; i++){
					printf ("\n Jogo %d", i);
					a.numero = i;
					fwrite(&a.nome_apostador,sizeof(a.nome_apostador),1,ap);
					fwrite(&a.numero,sizeof(a.numero),1,ap);
					printf("\n Digite o palpite de quantos gols serao feitos pelo time da casa: ");
					scanf("%d", &a.golt1);
					fwrite(&a.golt1,sizeof(a.golt1),1,ap);
					printf("\n Digite o palpite de quantos gols serao feitos pelo time visitante: ");
					scanf("%d", &a.golt2);
					fwrite(&a.golt2,sizeof(a.golt2),1,ap);
				}
				
				//fwrite(&a.cod_apostador,sizeof(a.cod_apostador),1,ap);
				//fwrite(&a.nome_apostador,sizeof(a.nome_apostador),1,ap);
				fclose(ap);
				
				salvo();

				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				
			break;

			case 5:
				
			break;

			case 6:
				
			break;

			case 7:
				
			break;
			
			case 8:
				
			break;

			case 9:
				system("cls");
				menu_principal();				
			break;
		}
	}while(op != 9);

}

void func_cadreal(){
	char grupo[200];
	int op_cad, codigo = 0, i = 1, j = 1, h = 0;
	menu_cadastrar ();
	FILE *arq;
	FILE *cad;
	int qnt=0, z;
	Jogo cad_jogo;
	FILE *teste = fopen("jogos_A_fase1.txt","r");
				
	do{		// limpa a tela
		system("cls");
		menu_cadastrar ();
		char linha[100];
		scanf("%d", &op_cad);
		switch(op_cad){
			case 1:
				
				arq = fopen ("jogos_A_fase1.txt","r");
				fread(&grupo,sizeof(grupo),1,arq);
					for(z=0;z<strlen(grupo);z++){
						if(grupo[z]=='\n'){
							qnt++;
						}
						if(qnt==6){
							grupo[z]='\0';
							break;
						}
					}
				grupo[strlen(grupo)]='\0';
				printf("Jogos: \n %s", grupo);
				/*do{
				fgets(linha,100,teste);
				printf("%s",arq);
				}while(!feof(arq));*/
				fclose(arq);

				cad = fopen ("jogos_A_fase1_real.txt","wb");
					
				for(i = 1; i < 7; i++){
					printf ("\n Jogo %d", i);
					cad_jogo.numero = i;
					fwrite(&cad_jogo.numero,sizeof(cad_jogo.numero),1,cad);
					printf("\n Digite quantos gols foram feito pelo time da casa: ");
					scanf("%d", &cad_jogo.golt1);
					fwrite(&cad_jogo.golt1,sizeof(cad_jogo.golt1),1,cad);
					printf("\n Digite quantos gols foram feito pelo time visitante: ");
					scanf("%d", &cad_jogo.golt2);
					fwrite(&cad_jogo.golt2,sizeof(cad_jogo.golt2),1,cad);
				}
				fclose(cad);
								
				break;
	
			case 2:
				
			break;

			case 3:
				
			break;

			case 4:
			
			break;

			case 5:
				
			break;

			case 6:
				
			break;

			case 7:
				
			break;
			
			case 8:
				
			break;

			case 9:
				system("cls");
				menu_principal();				
			break;

			default:
				printf("\n\t Opcao invalida! Digite corretamente a opcao desejada!! \n\n");
			break;
		}

	}while ( (op_cad<10) && (op_cad!=10));
}

void func_compara(pilha* pj,pilha_palpite* pp,char *usuario){
	int i;
for(i=0;i<6;i++){
		if(strcmp(usuario,pp->vet[i].nome_apostador)){
			pp->vet[i].pontos_feitos=0;
			if((pp->vet[i].golt1 == pj->vet[i].golt1)&&(pp->vet[i].golt2 == pj->vet[i].golt2)){
				pp->vet[i].pontos_feitos += 20;
			}
			if((pp->vet[i].golt1 > pp->vet[i].golt2) && (pj->vet[i].golt1 > pj->vet[i].golt2)){
				pp->vet[i].pontos_feitos += 10;
			}
			else if((pp->vet[i].golt2 > pp->vet[i].golt1) && (pj->vet[i].golt2 > pj->vet[i].golt1)){
				pp->vet[i].pontos_feitos += 20;
			}
		}
	}
}

void func_pont(){
	FILE *fp;
	FILE *fp1;
	int op = 0, cont, i;
	pilha_palpite pp;
	pilha pj;
	Jogo cad_jogo;
	Aposta cad_aposta;
	char nome[50];

	InicPilha1(&pj);
	InicPilha (&pp);
	
	fp = fopen ("jogos_A_fase1_real.txt","rb");
					
	for(i = 1; i < 7; i++){
		
		fread(&cad_jogo.numero,sizeof(cad_jogo.numero),1,fp);
		fread(&cad_jogo.golt1,sizeof(cad_jogo.golt1),1,fp);
		fread(&cad_jogo.golt2,sizeof(cad_jogo.golt2),1,fp);
		Push(&pj, cad_jogo);

	}
	fclose(fp);

	fp1 = fopen ("aposta_A.txt","rb");
	for(i = 1; i < 7; i++){
		fread(&cad_aposta.nome_apostador,sizeof(cad_aposta.nome_apostador),1,fp1);
		fread(&cad_aposta.numero,sizeof(cad_aposta.numero),1,fp1);
		fread(&cad_aposta.golt1,sizeof(cad_aposta.golt1),1,fp1);
		fread(&cad_aposta.golt2,sizeof(cad_aposta.golt2),1,fp1);
		Push1(&pp, cad_aposta);

	}
	fclose(fp1);

	printf("Digite seu nome: ");
	scanf("%s", nome);
	func_compara(&pj,&pp,nome);



}

void menu_principal (){
    printf("|-------------------------------------------------------------------------|\n");
    printf("|                    BOLAO DA COMPA DO MUNDO                              |\n");
    printf("|-------------------------------------------------------------------------|\n");
    printf("| Entre com a opcao desejada:                                             |\n");
    printf("|                                                                         |\n"); 
    printf("|  [1] : Cadastro de grupos e confrontos                                  |\n");
    printf("|  [2] : Cadastro de resultados reais                                     |\n");
	printf("|  [3] : Cadastro de palpites do bolao                                    |\n");
	printf("|  [4] : Pontuacao do bolao                                               |\n");
	printf("|  [5] : Classificacao                                                    |\n");
    printf("|  [6] : Sair do programa                                                 |\n");
    printf("|_____--------------------------------------------------------------------|\n");
    printf("  opcao:  ");
}

void menu_cadastrar (){
    printf("\t|----------------------------------------------------------|\n");
    printf("\t|                  CADASTRO DOS GRUPOS                     |\n");
    printf("\t|----------------------------------------------------------|\n");
    printf("\t| Entre com a opcao desejada:                              |\n");
    printf("\t|                                                          |\n"); 
    printf("\t|  [1] : Grupo A                                           |\n");
    printf("\t|  [2] : Grupo B                                           |\n");
    printf("\t|  [3] : Grupo C                                           |\n");
    printf("\t|  [4] : Grupo D                                           |\n");
    printf("\t|  [5] : Grupo E                                           |\n");
    printf("\t|  [6] : Grupo F                                           |\n");
    printf("\t|  [7] : Grupo G                                           |\n");
	printf("\t|  [8] : Grupo H                                           |\n");
    printf("\t|  [9] : Retornar ao menu principal                        |\n");
    printf("\t|----------------------------------------------------------|\n");
    printf("\t  opcao:  ");
}

void menu_bolao (){
    printf("\t|----------------------------------------------------------|\n");
    printf("\t|                  JOGOS DOS GRUPOS                        |\n");
    printf("\t|----------------------------------------------------------|\n");
    printf("\t| Entre com a opcao desejada:                              |\n");
    printf("\t|                                                          |\n"); 
    printf("\t|  [1] : Grupo A                                           |\n");
    printf("\t|  [2] : Grupo B                                           |\n");
    printf("\t|  [3] : Grupo C                                           |\n");
    printf("\t|  [4] : Grupo D                                           |\n");
    printf("\t|  [5] : Grupo E                                           |\n");
    printf("\t|  [6] : Grupo F                                           |\n");
    printf("\t|  [7] : Grupo G                                           |\n");
	printf("\t|  [8] : Grupo H                                           |\n");
    printf("\t|  [9] : Retornar ao menu principal                        |\n");
    printf("\t|_---------------------------------------------------------|\n");
    printf("\t  opcao:  ");


}

/*
cad = fopen ("jogos_A_fase1_real.txt","rb");

				for(i = 1; i < 7; i++){
					
					fread(&cad_jogo.numero,sizeof(cad_jogo.numero),1,cad);
					fread(&cad_jogo.golt1,sizeof(cad_jogo.golt1),1,cad);
					fread(&cad_jogo.golt2,sizeof(cad_jogo.golt2),1,cad);
					
					printf (" %d %d %d ", cad_jogo.numero, cad_jogo.golt1, cad_jogo.golt2); 
				}

				fclose(cad);
*/

// Ultima funcao sem localizacao*
