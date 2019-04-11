#include<stdio.h>
//Primo -> divisivel por um e por ele mesmo.

int todos_os_primos (int n) {
	int i;
	int primo;
	int div=0;
	int vet[n];
	for(i=2; i<n; i++) {
		if (n%i == 0 && div < 2)
 			primo = 0; // nao e primo
			div += 1;
		else primo = 1;
	}
	

	if (primo == 1)
		return 1;
	else (primo == 0);
		return 0;
}


int main()
{
	int N;
	printf("digite o MAX: ");
	scanf("%d",&N);
	int p[N];
	p = todos_os_primos(N);

	


	return 0;
}


