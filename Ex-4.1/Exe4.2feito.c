
#include<stdio.h>

// primo - > é o numero que possui 2 divisores; 1 , e ele mesmo

int eh_primo (int n) {
	int i;
	int primo;
	int div=0;	
	
	for(i=1; i<=n; i++) {
		if (n%i == 0) {
 			primo = 0; // nao e primo
			div += 1;
			//printf("%d \n",div);

		}
		else (n%i != 0); {
			primo = 1;
		}
	}
	if (div == 2)
		return 1; //  é 
	else (div != 2);
		return 0; //  nao é
}
int main()
{
	int max,p,N;
	
	printf("digite o MAX: ");
	scanf("%d",&max);

	printf("O numero 1 é Primo!\n"); // Ignore
	
	for(N=1; N<=max; N++) {
		p = eh_primo(N);
//		printf("%d\n",p);


		if (p == 1) {
			printf("O numero %d é Primo! \n",N);
		}
		else {
			if (p == 0) {
			//printf("O numero %d NÃO é Primo! \n",N);
			}	
		} 
	}

	return 0;
}
