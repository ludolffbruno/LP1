#include<stdio.h> 
#include<string.h> 

int main(void) {
	char s[25];
	int i;

	scanf("%s",s);
	printf("%s\n",s);
	//printf("Tamanho string %d\n ", strlen(s));

	FILE* f = fopen("/home/ime/A#LP1-BH/arq-01.txt","w");
	
	for(i=0 ;strlen(s) ;i++ ) {

		if (i <= strlen(s)){
			fputc(s[i],f);
		}

	}

	fclose(f);

	return 0;
}
