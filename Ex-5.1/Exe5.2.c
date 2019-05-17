#include<stdio.h>


void compra(int*conta, int valor) {
    *conta = *conta - valor;         // Navegue por conta , faça : conta - valor

}

int main(void){
    int m=1000 ,h = 800;
    int*p;

    if (m > h) {
        p = &m;  // aponte para a conta da mulher
        
    } else { // <=
        p = &h;  // aponte para a conta do homem
        
    }

    compra(p,30);
    printf ("Mulher: %d\nHomem: %d\n",m , h);
    
    return 0;
}

// Se m=h  homem paga.


