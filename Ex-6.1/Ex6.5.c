#include<stdio.h>
#include<string.h> 

int strlen2(char* str){
	int count=0;
	while (str[count] != '\0'){
		count += 1;
	}
	return count;	// retorna o tamanho da string
}

void strjoin2(char* d; char* o1; char* o2){
	int n = 0;
	int i = 0;
	int j = 0;
	
	if (d[0] != '\0'){  // preparando o vetor.
 		d[0] = '\0';

	for(i=0; i<strlen2(o1); i++){ 
		d[i] = o1[i];
	}
	for(j=0; j<strlen2(o2); j++){ 
		d[i] = o2[j];
		i++;
	}

}

int main() {
	char p1[50];
	char p2[50];
	char destino[100];

	printf("Digite as Strings: ");
	scanf("%s",p1); 
	scanf("%s",p2);

	printf("%s\n %s\n",p1,p2);

	strjoin2(destino, p1, p2);

   return 0; 
}


