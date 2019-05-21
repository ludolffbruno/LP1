#include<stdio.h>

//void preenche(int arr[l*c], int* l, int* c) ;

//float media(int arr[4][2],int l, int c) ;


int main() {
//	preenche(arr[l][c], int l, int c);
	int arr[4][2];
	int i=0,j=0;
	
	for(i=0; i<4; i++) {
		for(j=0; j<2; j++) {
			scanf("%d",&arr[i][j]);
		}
		printf("MAT %d\n",arr[i][j]);

	} 

    return 0;
}

/*

void preenche(int arr[l*c], int* l, int* c) {
	int i=0,j=0;
	int l = 4 , c = 2 ;

	for(i=0; i<5; i++) {
		for(j=0; j<3; j++) {
			scanf("%d",&arr[i][j]);
		}
	printf("MAT %d\n",arr[i][j]);
	}
}
*/


/*
float media(int arr[4][2],int l, int c) {
	int i,j;
	float media,soma = 0.00;

	for(i=0;i<4;i++) {
			for(j=0;j<2;j++) {
				S += arr[i][j];
			}
		}

	media = soma / (l*c);
	return media;
} 
*/



