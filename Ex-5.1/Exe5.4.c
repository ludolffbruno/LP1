#include<stdio.h>


// prototipo de funcao
void  troca ( int *  , int *  );  // espera dois ponteiros de inteiros


int  main ()
{
	int x = 10 ;
	int y = 20 ;

	printf ( "Antes --> X: %d \t Y: %d \n" , x, y);

	troca (&x, &y); // quando passo endereço de memo aqui ...

	printf ( "Depois --> X: %d \t Y: %d \n " , x, y);
	
	return  0 ;
}

// funcao de fato
void troca( int* p1, int* p2)  // ...p1,p2 aponta para x,y daqui.
{
	int aux;
	aux = *p1;    // aux recebe (navega por p1 e retorna resultado)
	*p1 = *p2;  // p1 = &y
	*p2 = aux;   // p2 = &x
}


