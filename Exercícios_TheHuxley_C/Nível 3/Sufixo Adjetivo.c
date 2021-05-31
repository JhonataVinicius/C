#include <stdio.h>
#include <string.h>

int main(){
	char adjetivo[15], novo[40], add[]="Aquilo que ";
	int tam;
	
	scanf("%s", adjetivo);
	tam = strlen(adjetivo);
	strncpy(novo, adjetivo, tam-3);
	novo[tam-3] = '\0';
	printf("Aquilo que %s.", novo);

  return 0;
}