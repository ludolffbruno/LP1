#include<stdio.h>

int preenche(int* vec, int n){ //  
	
	int i = 0;
    while (n > 0) {
        printf("Inserindo no vetor: ");   
        scanf("%d", &vec[i]); 
        i += 1;
        n -= 1;
        }        
	
    return 0;
} 
// -------------------------------------------------//

int media(int* vec,int n) { // qnd passo um ponteiro apontando para um vetor
    int m , soma=0 , i=0;		// o gcc já aponta para o primeiro membro d vetor.

    for (i ; i < n ; i+=1 ) {
		
		printf ("Valor VEC: %d\n",vec[i]);

        soma += vec[i];    //valor correspondente a posição i

	    printf ("SOMA DENTRO MEDIA: %d\n",soma);
    }
	m = soma / n;

    return m;    
}

// -------------------------------------------------//

int main() {

    int vec[100]; // vet fixo 
    int n; // tem que ser aqui? pode ser dentro da função?

    printf("Qual tamanho do Vetor: ");     
    scanf("%d", &n);

	int a = preenche(vec,n);
	    
	float med = media(vec,n);

    printf ("Media: %f \n",med);

    return 0;
}


