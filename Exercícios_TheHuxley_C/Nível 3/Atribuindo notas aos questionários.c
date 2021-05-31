#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
	int tam, tam_gab, tam_parcial, tam_resp, acertos;
	float percentual, tamf, acertosf;
	char gabarito[100], resposta[100];
	
	scanf("%d", &tam);
	
	gets(gabarito);
	
	while(1){
		tam_gab = 0;
		gets(gabarito);
		tam_parcial = strlen(gabarito);
		for (int i = 0; i < tam_parcial; i++){
			if(gabarito[i] != ' '){
				tam_gab++;
			}
		}
		
		if (tam == tam_gab){
			break;
		}
		
		else{
			printf("Gabarito de tamanho errado. Entre com o novo gabarito:\n");
			continue;
		}
	}
	
	while(1){
		gets(resposta);
		if (strcmp(resposta,"sair")==0){
			break;
		}
		else{
			tam_resp = 0;
			acertos = 0;
			tam_parcial = strlen(resposta);
			for (int i = 0; i < tam_parcial; i++){
				if(gabarito[i] != ' '){
					tam_resp++;
				}
			}
			if(tam == tam_resp){
				for(int i = 0; i < tam_parcial; i++){
					if (gabarito[i] == resposta[i] && gabarito[i] != ' '){
						acertos++;
					}
				}
				tamf = tam;
				acertosf = acertos;
				percentual = (acertosf*100)/tamf;	
				printf("Percentual de acertos: %.1f\n", percentual);
			}
			else{
				printf("Tamanho da resposta diferente do tamanho do gabarito.\n");
			}
			
			for (int i = 0; i < tam_parcial; i++){
				resposta[i] = '\0';
			}
		}
	}
}

