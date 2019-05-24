#include<stdio.h>
#include<string.h> 

int strlen2(char* str){
	int count=0;
	
	while (str[count] != '\0'){
		count += 1;
	}

	return count;	
}

int main() {
	char string[100];

	printf("Digite uma String: ");
	scanf("%s",string); // com string não utiliza & mesmo no scanf 
	
//	printf("Imprimindo : %s\n",string);
	
	printf("%d\n",strlen2(string));
	
    return 0; 
}


