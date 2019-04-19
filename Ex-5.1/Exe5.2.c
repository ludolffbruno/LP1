#include<stdio.h>

void compra(float*conta, float valor) {
    *conta = *conta - valor;        // navegue pelo ponteiro e altere o valor

}

int main(void){
    float mulher ,homem;
    float*p;

	printf("Conta da Mulher: \n");
	scanf("%f",&mulher);

	printf("Conta do Homem: \n");
	scanf("%f",&homem);

    if (mulher > homem) {
        p = &mulher; // p aponta para mulher
        
    } else {
        p = &homem; // p aponta para homem
        
    }

    compra(p,500);
    printf ("Mulher: %f \nHomem: %f\n",mulher,homem);
    
    return 0;
}
