#include<stdio.h> 

struct Personagem { //funcão do tipo estrutura. com campos: força, energia e exp.
  int forca;
  int energia; 
  int experiencia;
};

struct Personagem preencheA (void) {  // função! exemplo: int preencheA(void)
	struct Personagem person;
	printf("Ler força: ");
	scanf("%d",&person.forca);

	printf("Ler energia: ");
	scanf("%d",&person.energia);

	printf("Ler Experiencia: ");
	scanf("%d",&person.experiencia);
	
	printf("\n");
	
	return person;
}


//void preencheB (struct Personagem *p) {}


void main(void) {
  	struct Personagem p1 = preencheA();
  	struct Personagem p2 = preencheA();

//	struct Personagem p2;
//	preencheB(&p2);


	printf("p1 (%d,%d,%d)	vs  p2 (%d,%d,%d)\n", 
			p1.forca, p1.energia, p1.experiencia,
			p2.forca, p2.energia, p2.experiencia);

}

