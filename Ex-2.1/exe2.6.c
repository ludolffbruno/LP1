#include <stdio.h>

// Exercicio #2.6 OK 

/* 
SOMATÓRIO ATÉ N
*/

int main() {

    int n, somatorio = 0, i;

    printf("Somatório até N. \n");
    
    printf("Digite N: \n");
    scanf("%d",&n);        
    
    for (i = 1; i<=n; i++) {
        somatorio += i;
    }
    printf("SOMATORIO: %d \n",somatorio);
     
	return 0;
}

