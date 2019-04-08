# include < stdio.h >

int  main ()
{
	int cont;
    int a;
    int b;
    int i;

	printf ( " Primeiro Numero: " );

	scanf ( " % d " , & a); // SCANF NAO PRECISA DE \ N POXA !!

// 	printf ("% d \ n", a);

	printf ( " Segundo Numero: " );
	scanf ( " % d " , & b);

	if (a <b)
	{
		para (i = a; i <= b; i ++)
		{
			if (a% 2 == 0 )
			{
				printf ( " % d \n " , a);
			}

		}

	}	 mais 
		{
		if (a> b) {
				para (i = b; i <= a; i ++) {
					if (a% 2 == 0 ) {
						printf ( " % d \n " , b);
					}
				}
		
			}

		}	
    return  0 ;
}


/ * faça um programe que leia dois números (em qqr ordem) e exiba todos os numeros pares inteiros entre eles de maneira decrescente ouseja do maior ate o menor
entrada 2; 9
saida 8
6
4
2
* /
