#include<stdio.h>

struct coordenada {
	int x;
	int y;
	int z;
	};


void main(void){
	struct coordenada v1,v2,v3;
	v1.x = 1; 	v1.y = 0;	v1.z = 5;
	v2.x = 3;	v2.y = 3;	v2.z = 3;
	v3.x = 0;	v3.y = 10;  v3.z = 0;
	
	printf("v1,v2,v3 = (%d,%d,%d),(%d,%d,%d),(%d,%d,%d) \n"
			,v1.x, v1.y, v1.z, 
			v2.x, v2.y, v2.z, 
			v3.x, v3.y, v3.z );

	printf("Coordenada y dos três pontos: \n");
	printf("%d \n",v1.y);
	printf("%d \n",v2.y);
	printf("%d \n",v3.y);

	//somando 10 a cada ponto z.
	v1.z += 10;
	v2.z += 10;
	v3.z += 10;

	// exibindo as três coordenadas de v2
	printf("coordenadas de v2 alterado: (%d,%d,%d) \n",v2.x, v2.y, v2.z);

}

