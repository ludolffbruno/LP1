#include <stdio.h>

// Exercicio #2.5   OK 

/*  Ler até que seja digitado zero, 
imprimir a soma de todos lidos. 
 */

int main() {

    float N;
    float cont = 0;
	printf("Flag Negativo. \n");
    printf("Entre com um número: \n");
    scanf("%f",&N);
    while (N >= 0) {
        cont += N;
        scanf("%f",&N);
    }   printf("A soma dos números digitados é: %f \n",cont);

	return 0;
}



