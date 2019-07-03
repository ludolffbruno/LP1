#include<stdio.h>
#include<string.h>

struct aluno { //funcão do tipo estrutura. com campos: .
  char nome[50];
  int idade; 
};

void preenche(struct aluno* p) {  //p é um ponteiro para strutura aluno  
	printf("Digite o nome: ");
	scanf("%s",(*p).nome);

	printf("Idade: ");
	scanf("%d",&(*p).idade);
	printf("\n");
}


void main(void) {
  	struct aluno a1;
	preenche(&a1);

	printf("Nome: %s\n",a1.nome);
	printf("Idade: %d\n",a1.idade);


}


