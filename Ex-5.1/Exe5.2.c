#include<stdio.h>


// ALTERAR 


void compra(int*conta, int valor) {
    *conta = *conta - valor;

}

int main(void){
    int m=1000 ,h = 800;
    int*p;

    if (m > h) {
        p = &m;
        
    } else {
        p = &h;
        
    }

    compra(p,30);
    printf ("%d  %d\n",m , h);
    
    return 0;
}
