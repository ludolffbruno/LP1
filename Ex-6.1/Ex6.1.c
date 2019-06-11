#include<stdio.h>

int preenche(int* vec, int n){  //   coloca valores no vetor
	
	int i = 0;
    while (n > 0) {
        printf("Adicionando valores ao vetor: ");   
        scanf("%d", &(*(vec+i)));  // atribuindo o valor lido a &vec[i]
        i += 1;
        n -= 1;
        }        
	
    return 0;
} 
// -------------------------------------------------//

int media(int* vec,int n) { // qnd passo um ponteiro apontando para um vetor
    int soma=0 , i=0;		// o gcc já aponta para a primeira posicão d vetor.
	float m;
    for (i ; i < n ; i+=1 ) {  // 0 <= i <= n-1
		
//		printf ("Valor que ta na posicão %d do VEC é: %d\n",i,vec[i]);

        soma += *(vec+i);   //soma valor correspondente a posição i
							// notacão de ponteiro. vec[i]
//	    printf ("SOMA DENTRO MEDIA: %d\n",soma);
    }
	m = soma / n; 

    return m;    
}

// -------------------------------------------------//

int main() {

    int vet[100]; // vet fixo 
    int n; 

    printf("Qual tamanho do Vetor: ");     
    scanf("%d", &n);

	int a = preenche(vet,n);
	    
	float med = media(vet,n);

    printf ("Media: %.2f \n",med);

    return 0;
}


