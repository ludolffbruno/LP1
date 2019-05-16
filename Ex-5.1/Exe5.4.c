#include<stdio.h>


// prototipo de funcao
void  troca ( int *  , int *  );  // recebe dois ponteiros de inteiros

int  main ()
{
	int x = 10 ;
	int y = 20 ;

	printf ( "Antes --> X: %d \t Y: %d \n" , x, y);

	troca (&x, &y);

	printf ( "Depois --> X: %d \t Y: %d \n " , x, y);
	
	return  0 ;
}


void troca( int* p1, int* p2)
{
	int aux;
	aux = *p1;    // aux = &x
	*p1 = *p2;  // p1 = &y
	*p2 = aux;   // p2 = &x
}


