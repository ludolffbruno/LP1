/* 
uma turma possui 50 alunos.
Cada aluno faz uma prova. 
A nota de cada prova e um inteiro que varia entre 0 e 100.

-Declare um vetor para guardar todas as notas da turma usando o tipo mais      
 economico possivel
-Leia todas as notas para esse vetor.
-Exiba a media e quantidade de notas acima da media.
*/

#include<stdio.h>

int main()
{
	char vet[50];
	int i;
	float soma,media,acima;

	for(i=1; i<=5; i=i+1) {	
		printf("aluno %d :",i);
		scanf("%s",&vet[i]);

		soma += vet[i];
		printf("%f \n",vet[i]);
	}
	media = soma/5;
	printf("Média: %f \n",media);
    return 0;
}
