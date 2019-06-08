#include<stdio.h>

void compra(int*, int, int*) ; // funcao compra recebe como parametro: ponteiro, inteiro , ponteiro

// --------------------------------

int main(){
    int mulher ,homem;
    int*conta; // ponteiro criado
	int compras[] = { 100 , 50 , 80 , 30 , 20 }; // vetor com 5 valores 

	printf("Conta da Mulher: \n");
	scanf("%d",&mulher);			// recebe o valor da Conta_M

	printf("Conta do Homem: \n");
	scanf("%d",&homem);				// Recebe o valor da Conta_H
 	printf ("\n");                  // Pula Linha

	printf ( " valor inicial da conta mulher: %d \n " , mulher);
	printf ( " valor inicial da conta homem: %d \n" , homem);

	for(int i=0; i < 5 ; i++) {

		if (mulher >= homem) {
        	conta = &mulher; // p aponta para mulher
		} else {
        	conta = &homem; // p aponta para homem
   		}

		printf ("compras[%d]: %d\n", i, compras[i]); // compras[i] pos do vet

		if ((*conta) >= 500) {   // Conta verificado no if else
			compra(conta, i, compras);   //chama a função com parametro certo
			printf ( "mulher: %d \n" , mulher);
			printf ( "homem: %d \n\n" , homem);
		} else {
			printf("As contas nao valem suficiente para efetuar uma compra!\n\n");
		}
	}

	return 0;
}

void compra(int*Conta, int i, int *Compras){  // nao esquecer que vetor/arrays é 
	*(Conta)=*(Conta) - Compras[i];			  // ponteiro, por isso int* Compras
}



