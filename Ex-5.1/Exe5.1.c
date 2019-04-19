#include<stdio.h>

int main() {
	int a,b;
	int *p; // ponteiro

	printf("Primeiro: \n");		// ler (a)
	scanf("%d",&a);            

	printf("Segundo: \n");		// ler (b)
	scanf("%d",&b);
	
	if (a>b) { 
		*p = a; // aponte para a
		printf("Ponteiro criado para: %d \n",a);
		a = (*p - 50);  // navegue por *p e subtraia 50
		printf("valor subtraido: %d\n\n",a);

	} else  {

		*p = b; // aponte para b
		printf("Ponteiro criado para: %d \n",b);
		b = (*p - 50); // navegue por *p e subtraia 50
		printf("valor subtraido: %d\n\n",b);

	}
	printf("valor A: %d\n",a);
	printf("valor B: %d\n",b);

    //atraves de p subtraia 50 do maior valor 

	return 0;
}
