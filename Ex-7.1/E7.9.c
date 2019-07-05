#include <stdio.h>

struct Ponto {
	int x;
	int y;
};

void preencheponto(struct Ponto* p) {
	printf("x = ");
	scanf("%d", &p->x);
	printf("y = ");
	scanf("%d", &p->y);
};

struct Personagem {
	int identidade;
	int pontuacao;
	struct Ponto localizacao;
};

void preencheperso(struct Personagem* p) {
	printf("Identidade: ");
	scanf("%d", &p->identidade);
	p->identidade = 0;
};

void main(void) {

	struct Personagem Qts_Personagem[10];

	for (int i = 0; i < 10; i++) {
		preencheperso(&Qts_Personagem[i]);
		preencheponto(&Qts_Personagem[i].localizacao);
	};

}



