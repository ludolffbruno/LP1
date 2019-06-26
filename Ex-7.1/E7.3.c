#include<stdio.h> 

struct Personagem { //funcão do tipo estrutura. com campos: força, energia e exp.
  int forca;
  int energia; 
  int experiencia;
};

void preencheB (struct Personagem* p) {  //função que recebe um ponteiro struct.
	printf("Ler força: ");
	scanf("%d",&(*p).forca);

	printf("Ler energia: ");
	scanf("%d",&(*p).energia);

	printf("Ler Experiencia: ");
	scanf("%d",&(*p).experiencia);
	
	printf("\n");
}


void main(void) {
  	struct Personagem p1;
	preencheB(&p1);
  	struct Personagem p2;
	preencheB(&p2);

	printf("p1 (%d,%d,%d)  vs  p2 (%d,%d,%d)\n", 
			p1.forca, p1.energia, p1.experiencia,
			p2.forca, p2.energia, p2.experiencia);
}


