#include <stdio.h>
#include <string.h>

int main(void){
	char verbo[15], novo[15], add[]="ndo";
	int tam;
	
	gets(verbo);
	tam = strlen(verbo);
	strncpy(novo, verbo, tam-1);
	
	printf("%s ", novo);
	printf("%s", (strcat(novo,add)));
}