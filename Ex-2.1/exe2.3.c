#include <stdio.h>

// Exercicio #2.3 Ok 


/* Pela Regra de Três:    
                 $ 1   =  R$ 3,17 
    $ cell_em_dolares  =  X
    
    X = (cell_em_dolares * 3,17)
*/  

int main() {
    float cell_em_dola;
    float X;
    
    printf("Digite o valor do celular em dólares.\n");
    scanf("%f",&cell_em_dola);    
    
    X = (cell_em_dola * 3.17); 

    printf("%f\n",X);

    if (X < 1000) {
        printf ("Esse é sem dúvida, um com negócio.\n");
    } else { 
        printf ("Não é Bom negócio.\n");
    }
	return 0;
}



