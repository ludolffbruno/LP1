#include <stdio.h>

// ler 50 tmp para o vetor, media , exibir qts de leitura acima da media


int main() {

	int qtd = 0, i, soma=0 , n;
    float media;

    printf("Quantas temps? :  \n");
    scanf("%d",&n);
	int vet[n];

	for ( i = 0 ; i <= n-1 ; i = i + 1 ) {
		printf("Digite a temperatura: \n") ; 
       	scanf("%d",&vet[i]) ;		// scanf nao tem \n se colocar da erro.

        soma += vet[i];
        //printf("Soma: %d \n",soma);
    }
    media = soma / n ;
    printf ("Media: %f \n\n" , media) ;
    
	for ( i = 0 ; i <= n-1 ; i = i + 1 ) {
        if (vet[i] > media) {
            qtd += 1 ; 
        }
    }
    printf ("Valores acima da média: %d \n ", qtd);
	return 0;
}


