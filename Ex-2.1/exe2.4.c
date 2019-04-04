#include <stdio.h>
// Exercicio #2.4  - OK

/* Ler em milha , calcular em km , precisa ficar entre 80 e 100 km

 1 Milha = 1.6 quilometros.
     mph = X
 */

int main() {

    float mph;
    float X;

    printf("Velocidade em Milha/hora: \n\n");
    scanf("%f",&mph);
    
    X = (mph * 1.6);

    printf("\nValor em Km/h: %f \n\n",X);

    if (X < 80.0) 
        printf("ACELERAR \n\n");
    if (X >= 80 && X <= 100) 
        printf("MANTENHA \n\n ");
    if (X > 100)
        printf ("DESACELERE \n\n");
	return 0;
}



