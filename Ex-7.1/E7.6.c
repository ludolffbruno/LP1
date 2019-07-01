#include<stdio.h> 
#include<string.h>
struct skatista { //funcão do tipo estrutura. com campos: .
  char nome[50];
  int idade; 
  char best_trick[20];
};

void ler_caracteristicas (struct skatista* p) {  //função que recebe um ponteiro struct.
	printf("Digite o nome: ");
	scanf("%s",(*p).nome);

	printf("Idade: ");
	scanf("%d",&(*p).idade);

	printf("Best trick: ");
	scanf("%s",(*p).best_trick);
	
	printf("\n");
//	printf("nome: %s \n",(*p).nome);
}

void exibe (struct skatista* p){
	printf("***Skatista Nome: %s \n",(*p).nome);
	printf("Idade: %d \n",(*p).idade);
	printf("Melhor Manobra: %s\n\n",(*p).best_trick);
}
	
/*
void exibe(struct skatista* p){    // 
	printf("***Skatista Nome: %s \n",(*p).nome);
	printf("Idade: %d \n",(*p).idade);
	printf("Melhor Manobra: %s\n\n",(*p).best_trick);
}
*/

void main(void) {
  	struct skatista p1;
	ler_caracteristicas(&p1);
  	struct skatista p2;
	ler_caracteristicas(&p2);

	exibe(&p1);
	exibe(&p2);

//	exibe(&p1);
//	exibe(&p2);

}


