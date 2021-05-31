#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 201

int main(void){
	char identificador[] = {'W', 'H', 'Q', 'E', 'S', 'T', 'X'};
	double duracao[] = {1.0, 1.0/2.0, 1.0/4.0, 1.0/8.0, 1.0/16.0, 1.0/32.0, 1.0/64.0};
	while(1){
		int compassos = 0;
		double soma = 0;
		char entrada[MAX];
		fgets(entrada, MAX, stdin);
		if (strcmp(entrada,"*\n") == 0) break;
		for (int i = 0; i < strlen(entrada); i++){
			if (entrada[i] == '/'){
				if (soma == 1.0) compassos += 1;
				soma = 0;
			}
			else{
				for (int j = 0; j < strlen(identificador); j++){
					if(entrada[i] == identificador[j]){
						soma += duracao[j];
						break;
					}
				}
			}
		}
		printf("%d\n", compassos);
	}

    return 0;
}