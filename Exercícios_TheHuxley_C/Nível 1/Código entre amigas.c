#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char cod[]={' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char mensagem[100];
	char trad[100];
	
	for (int i = 0; i < 40; i++){
				trad[i] = '\0';
			}
	
	while(1){
		int x, cont = 0;
		char *aux;
		
		
		gets(mensagem);
	
		aux = strtok(mensagem," ");
		
		while(aux != NULL){
			x = atoi(aux);
			trad[cont]= cod[x];
			aux = strtok(NULL," ");
			cont++;
		}
		
		if(strcmp(trad,"fim")==0)
			break;
		else
			printf("%s\n", trad);
			//trad[0] = '\0';
			for (int i = 0; i < 40; i++){
				trad[i] = '\0';
			}
	}
}