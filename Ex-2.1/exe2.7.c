#include <stdio.h>
#include <string.h>

// Exercicio #2.7 

/* 
O Campeonato Brasileiro está na reta final com 20 times na disputa.

Uma vitória vale 3 pontos, um empate vale 1 ponto e uma derrota vale 0 pontos. Escreva um programa que, para cada time, leia o nome, número de vitórias, número de empates e número de derrotas.

Ao final, o programa deve escrever o nome dos times com mais e menos pontos até o momento.*/

int main() {

    int  i=0 , vit , emp , der , pontuacao , maiorP = 0 , menorP = 999  ;
    char nome[100], salvar_maior[100] , salvar_menor[100];

    for (i ; i=4 ; i++) {
		// vit , emp , der = 0; 

        printf("Nome do time: \n");
        scanf("%s",nome);   // %c --> Um Caractere ; %s --> Uma Sequência.
						   // Não colocar indice na variavel, nao precisa &
        printf("Vitorias: \n");
        scanf("%d",&vit);

        printf("Empate: \n");
        scanf("%d",&emp);

        printf("Derrotas: \n");
        scanf("%d",&der);
		
		pontuacao = (vit*3 + emp + der*0);

		if (pontuacao > maiorP) {
			maiorP = pontuacao;	
			salvar_maior[i] = nome[i];  // sem indice?	
		} else {
			menorP = pontuacao;
			salvar_menor[i] = nome[i];  // sem indice
		}
		//printf("Vencedor: %s\n",salvar_maior);
		//printf("Perdedor: %s\n",salvar_menor);		
// PROGRAMA ESTA EM LOOP NAO SEI PORQUE :\ 
    }
	return 0;
}



















