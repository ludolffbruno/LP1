#include<stdio.h> 

struct Personagem { //funcão do tipo estrutura. com campos: força, energia e exp.
  int forca;
  int energia; 
  int experiencia;

};

int main(void) {
  
	struct Personagem p1; // variável p1 do tipo Personagem (estrutura).
    p1.forca = 10;
    p1.energia = 50;
    p1.experiencia = 30;

	struct Personagem p2;
    p2.forca = 18;
    p2.energia = 20;
    p2.experiencia = 25;
   
//	struct Personagem p2 = {13,150,200};
  
    printf("Força p1: %d\nForça p2 %d \n", p1.forca , p2.forca);

  return 0;
  }


