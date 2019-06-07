#include <stdio.h>
#include <string.h>

/* 
O Campeonato Brasileiro está na reta final com 20 times na disputa.
Uma vitória vale 3 pontos, um empate vale 1 ponto e uma derrota vale 0 pontos. Escreva um programa que, para cada time, leia o nome, número de vitórias, número de empates e número de derrotas.
Ao final, o programa deve escrever o nome dos times com mais e menos pontos até o momento.*/

void copiarString(char *copiarDaqui, char *colarAqui){
	while (*copiarDaqui != '\0') {
		*colarAqui = *copiarDaqui;
		++copiarDaqui;
		++colarAqui;
	}
	*colarAqui = '\0';
}

int main(void) {
    int  i=0, vit=0, emp=0, der=0, pontuacao=0, maiorP=0, menorP=9999;
    char nome[100], salvar_maior[100] , salvar_menor[100];

    for (i=0 ; i<21 ; i++) {
		//vit , emp , der = 0; 

        printf("Nome do time: \n");
        scanf("%s",nome);   // %c --> Um Caractere ; %s --> Uma Sequência.
						   // Não colocar indice na variavel, nao precisa &
//ok	printf("%s\n",nome);
        printf("Vitorias: \n");
        scanf("%d",&vit);

        printf("Empate: \n");
        scanf("%d",&emp);

		printf("Derrotas: \n");
        scanf("%d",&der);

		pontuacao = (vit*3 + emp + der*0);
//ok	printf("Pontuacao: %d\n",pontuacao);		

		if (pontuacao > maiorP) {
			maiorP = pontuacao;	
			copiarString(nome,salvar_maior);
//ok		printf("%s\n",salvar_maior);
		}
		if (pontuacao <= menorP) {
			menorP = pontuacao;
			copiarString(nome,salvar_menor);
		}
		printf("Vencedor: %s\n",salvar_maior);
		printf("Perdedor: %s\n",salvar_menor);	

//		printf("valor de i: %d\n",i);	
    }
	return 0;
}

