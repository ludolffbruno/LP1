#include<stdio.h>
#include<string.h> 

int strlen2(char* str){
	int count=0;
	while (str[count] != '\0'){
		count += 1;
	}
	return count;	// retorna o tamanho da string
}

void strjoin2(char* d, char* o1, char* o2){
	int i ;
	int j ;
	
	if (d[0] != '\0'){  // preparando o vetor.
 		d[0] = '\0';
	}
	for(i=0; i<strlen2(o1); i++){ 
		d[i] = o1[i];
	}
	for(j=0; j<strlen2(o2); j++){ 
		d[i] = o2[j];
		i++;
	}
	
}

int main() {
	char o1[50];
	char o2[50];
	char d[100];

	printf("Digite as Strings: ");
	scanf("%s",o1); 
	scanf("%s",o2);

//	printf("%s\n%s\n",o1,o2);

	strjoin2(d, o1,o2);
	printf("%s\n",d);

   return 0; 
}


