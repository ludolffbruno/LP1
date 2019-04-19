#include<stdio.h>

void compra(float*conta, float valor) {  // recebe um ponteiro para conta
    *conta = *conta - valor;        // navegue pelo ponteiro e altere o valor
// conta já é ponteiro , *conta, navegue pelo ponteiro
}

int main(void){
    float mulher ,homem;
    float*p;

	printf("Conta da Mulher: \n");
	scanf("%f",&mulher);

	printf("Conta do Homem: \n");
	scanf("%f",&homem);

    if (mulher >= homem) { 	// se contaM = contaH desconta da mulher
        p = &mulher; // p aponta para conta da  mulher
        
    } else {
        p = &homem; // p aponta para conta do  homem
        
    }

    compra(p,500); // parametro ponteiro e float (valor)
    printf ("Mulher: %f \nHomem: %f\n",mulher,homem);
    
    return 0;
}
