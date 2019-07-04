#include<stdio.h>

struct coordenada {
	int x;
	int y;
	};

void preenche(struct coordenada* p){
	printf("Coordenada x: ");
	scanf("%d",&p->x);
	printf("Coordenada y: ");
	scanf("%d",&p->y);
}

void preenche_vetor_de_pontos(char* vet, struct coordenada* p){
	int i;
	for(i=0; i<=9 ; i+=2){
		struct coordenada c1;
		preenche(&c1);				
		vet[i] = c1.x;
		vet[i+1] = c1.y;
	}
}

void maior_distancia (char* vet){
	struct coordenada maior;
	maior.x = 0;
	maior.y = 0;
	int i=0;
	for(i=0; i<=9; i+=2) {
		if (vet[i] > maior.x || vet[i+1] > maior.y){
			maior.x = vet[i];
			maior.y = vet[i+1];
		}
	}
	printf("Maior distancia: (%d,%d) \n",maior.x, maior.y);
}



void main(void){
	char vet[10]; // cada ponto (x,y)
	struct coordenada v1;
	preenche_vetor_de_pontos(vet , &v1);
	maior_distancia(vet);

}

/*	// imprime
	int i;
	for(i=0;i<=9;i++){
		printf("vet[%d] = %d\n",i ,vet[i]);
	}
*/


