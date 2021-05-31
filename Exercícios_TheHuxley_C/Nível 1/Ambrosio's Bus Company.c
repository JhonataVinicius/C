#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int num_passagem;
	char data[100];
	char origem[100];
	char destino[100];
	char horario[100];
	int poltrona;
	int idade;
	char nome[100];
}dados;

int cont=0, num, total =0, media;
dados pessoa[44];

int main(void){
	while(1){
		scanf("%d", &num);
		if (num == - 1){
			break;
		}
		else{
			pessoa[cont].num_passagem = num;
			scanf("\n", &pessoa[cont].data);
			gets(pessoa[cont].data);
			gets(pessoa[cont].origem);
			gets(pessoa[cont].destino);
			gets(pessoa[cont].horario);
			scanf("%d", &pessoa[cont].poltrona);
			scanf("%d", &pessoa[cont].idade);
			scanf("\n", &pessoa[cont].nome);
			gets(pessoa[cont].nome);
			total += (pessoa[cont].idade);
			cont ++;
		}
	}
	
	media = total/cont;
	for(int i = 0; i < cont; i++){
		if (pessoa[i].idade >= media && pessoa[i].poltrona % 2 == 0){
			printf("%s\n", pessoa[i].nome);
		}
	}
}