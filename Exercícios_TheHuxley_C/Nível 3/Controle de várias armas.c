#include <stdio.h>

int main(){
	char nacionalidade, ocupacao;
	int quant_armas, calibre;
	
	while(1){
		scanf("%c", &nacionalidade);
		
		if (nacionalidade != 'B' && nacionalidade != 'E'){
			printf("Fim");
			break;
		}
		
		else{

			if (nacionalidade == 'B'){
				scanf("\n%c", &ocupacao);
				scanf("\n%d", &quant_armas);
				scanf("\n%d", &calibre);
				if (ocupacao == 'T' || ocupacao == 'O'){
					if(quant_armas <= 1 && calibre <= 22){
						printf("Liberado\n");
					}
					else{
						printf("Barrado\n");
					}
				}
				
				else if (ocupacao == 'C'){
					if(quant_armas <= 2 && calibre <= 38){
						printf("Liberado\n");
					}
					else{
						printf("Barrado\n");
					}
				}
				
				else if (ocupacao == 'M'){
					printf("Liberado\n");
				}
			}	

			else if (nacionalidade == 'E'){
				scanf("\n%c", &ocupacao);
				scanf("\n%d", &quant_armas);
				scanf("\n%d", &calibre);
				if (ocupacao == 'T' || ocupacao == 'O' || ocupacao == 'C' || ocupacao == 'M'){
					if (quant_armas == 0){
							printf("Liberado\n");
					}
					else{
						printf("Barrado\n");
					}
				}	
			}scanf("%c", &nacionalidade);
		}
	}
}