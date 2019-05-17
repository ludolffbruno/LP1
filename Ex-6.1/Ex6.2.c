#include<stdio.h>

int main() {

	int arr[4][2];
	
	preenche(arr[4][2]);

    return 0;
}

void preenche(int arr[4][2], int l , int c) 
	int i,j;

	for(i=0; i<5; i++){

		for(j=0; j<3; j++){
			scanf("%d",%arr[i][j]);
		}
			
	}

float media(int arr[4][2],int l, int c) {
	int i,j;
	float media,soma = 0.00;

	for(i=0;i<4;i++){
			for(j=0;j<2;j++){
				S += arr[i][j];
			}
		}

	media = soma / (l*c);
	return media;
} 


