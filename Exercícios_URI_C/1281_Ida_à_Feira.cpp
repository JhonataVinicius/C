#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nome_produto[100];
	float valor;
}dados;

int main(void){
	int idas;
	scanf("%d", &idas);
	for (int i = 0; i < idas; i++){
		int quantidade=0, registro=0, unidades=0;
		double valor = 0;
		char nome[50];
		
		scanf("%d", &registro);
		dados produt[registro];
		
		for (int i = 0; i < registro; i++){
			scanf("%s",produt[i].nome_produto);
			scanf("%f", &produt[i].valor);
		}
		
		scanf("%d", &quantidade);
		
		for (int i = 0; i < quantidade; i++){
			scanf("%s", &nome);
			scanf("%d", &unidades);
			for (int j = 0; j < registro; j++){
				if(strcmp(nome,produt[j].nome_produto) == 0){
					valor += (produt[j].valor*unidades);
				}
			}
		}
		printf("R$ %.2lf\n", valor);
	}

    return 0;
}