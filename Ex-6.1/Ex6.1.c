#include<stdio.h>

int preenche(int* vec, int n){ // para receber um vetor tem que ser ponteiro? 

    printf("Qual tamanho do Vetor: ");     
    scanf("%d", &n);

    int i = 1;
    while (n > 0) {
        printf("Inserindo no vetor: ");   
        scanf("%d", &vec[i]);
        i += 1;
        n -= 1;
        
        }        
    return 0;
} 
// -------------------------------------------------//

int media(int* vec,int n) {
    int m , soma , i=0;

    for (i ; i <= n ; i+=1 ) {
        soma += vec[i];
        m = soma / n;

    }
    
    return m;    
}




// -------------------------------------------------//

int main() {

    int vec[100]; // vet fixo 
    int n; // tem que ser aqui? pode ser dentro da função?
	int resul=0;
    
	resul = media(*vec,n);

    printf ("Media: %d ",resul);

        

    return 0;
}
