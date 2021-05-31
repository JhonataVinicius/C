#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int cont = 1;
	while(1){
		bool flag = false;
		char assinatura[1000000]; 
		scanf("%s", & assinatura);
		if (strcmp(assinatura,"0") == 0) break;
		char sequencia[300000];
		scanf("%s", &sequencia);
		for (int i = 0; i < strlen(sequencia) - (strlen(assinatura) - 1); i++){
			int verifica = 0;
			for (int j = 0; j < strlen(assinatura); j++){
				if (assinatura[j] == sequencia[i+j]) verifica += 1;
			}
			if (verifica == strlen(assinatura)){
				printf("Instancia %d\n",cont);
				printf("verdadeira\n\n");
				cont += 1;
				flag = true;
				break;
			}
		}
		if (flag == false){
			printf("Instancia %d\n",cont);
			printf("falsa\n\n");
			cont += 1;
		}
	}

    return 0;
	
}