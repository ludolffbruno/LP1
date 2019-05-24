#include<stdio.h>

//void preenche(int* arr[l*c], int* l, int* c) ;
void preenche(int vet[4][2], int l, int c) {
	int i=0,j=0;

	for(i=0; i<4; i++) {  // leitura ok
		for(j=0; j<2; j++) {
			printf("Digite valores para o vetor:");
			scanf("%d",&vet[i][j]);
		}
	}
	// para imprimir utiliza-se outro 'for' . Ta ok.
	for(i=0; i<4; i++) {
		for(j=0; j<2; j++) {
			printf("%d  ",vet[i][j]); // linha e coluna.
		}
	printf("\n");
	}
}
	
//float media(int arr[4][2],int l, int c) ;

float media(int vet[4][2],int l, int c) {
	int i,j;
	float media,soma = 0.00;

	for(i=0;i<4;i++) {
			for(j=0;j<2;j++) {
				soma += vet[i][j];
			}
		}

	media = soma / (l*c);
	return media;
} 

int main() {
	
	int l = 4 , c = 2;
	int arr[l][c];
	float m;

	preenche(arr,l,c);
	m = media(arr,l,c);
	printf("%f\n",m);

    return 0;
}

