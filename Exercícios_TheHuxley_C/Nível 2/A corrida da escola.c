#include <stdio.h>

int main(void){
	int n, m, num,ganhador=0, tempo, menor_tempo;
	
	scanf("%d %d", &n, &m);
	
	int soma[n];
	int mat[n][m];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &num);
			mat[i][j] = num;
		}
	}
	
	for(int i = 0; i < n; i++){
		tempo = 0;
		for(int j = 0; j < m; j++){
			tempo += mat[i][j];
		}
		soma[i] = tempo;
	}
	
	menor_tempo = soma[0];
	
	for(int i = 0; i < n; i++){
		if(soma[i] <= menor_tempo){
			menor_tempo = soma[i];
			ganhador = i+1;
		}
	}
	
	printf("%d", ganhador);
}