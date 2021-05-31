#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char mensagem[80];

int main() {
	while(1){
		gets(mensagem);
		for (int i=0; i < strlen(mensagem); i++){
			mensagem[i] = toupper(mensagem[i]);
		}
		if (strcmp(mensagem,"THE END!")==0)
			break;
		else
			printf("%s\n", mensagem);
	}
}