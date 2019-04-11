#include<stdio.h>
//Primo -> divisivel por um e por ele mesmo.

int eh_primo (int n) {
	int i;
	int primo;
	int div;	

	for(i=2; i<n-1; i++) {
		if (n%i == 0)
 			primo = 0; // nao e primo
		else {
			primo = 1;
		}
	}	

	if (primo == 1)
		return 1;
	else (primo == 0);
		return 0;
}


int main()
{
	int N,p;
	printf("digite: ");
	scanf("%d",&N);
	p = eh_primo(N);

	if (p == 1) {
		printf("eh Primo! \n");
	}
	else {
		if (p == 0) {
			printf("nao eh Primo! \n");
		}	
	}

//	printf("%d \n", p);

	return 0;
}


