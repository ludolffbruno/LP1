#include<stdio.h>
//protótipo 
void compra(int*, int, int*) ;

int main(){
    int mulher ,homem;
    int*conta;
	int compras[]= { 100 , 50 , 80 , 30 , 20 };

	printf("Conta da Mulher: \n");
	scanf("%d",&mulher);

	printf("Conta do Homem: \n");
	scanf("%d",&homem);
	printf ("\n");

	printf ( " valor inicial da conta mulher: %d \n " , mulher);
	printf ( " valor inicial da conta homem: %d \n\n\n" , homem);

	for(int i=0; i < 5 ; i++) {

		if (mulher >= homem) {
        	conta = &mulher; // p aponta para mulher
		} else {
        	conta = &homem; // p aponta para homem
   		}

		printf ("compras[%d]: %d\n", i, compras[i]); // compras[i] pos do vet

		if ((*conta) >= 500) {
			compra(conta, i, compras);
			printf ( " mulher: %d \n" , mulher);
			printf ( " homem: %d \n\n" , homem);
		} else {
			printf("As contas nao valem suficiente para efetuar uma compra!\n\n");
		}
	}

	return 0;
}

void compra(int*Conta, int i, int *Compras){
	*(Conta)=*(Conta) - Compras[i];
}



