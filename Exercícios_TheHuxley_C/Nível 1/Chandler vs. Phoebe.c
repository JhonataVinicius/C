#include <stdio.h>

int main(){
	int t, num;
	
	scanf("%d", &t);
	int mat[t][t];
	
	for(int i= 0; i < t; i++){
		for(int j = 0; j < t; j++){
			scanf("%d", &num);
			if (num < 0){
				mat[j][i] = 2*num;
			}
			else{
				mat[j][i] = num;
			}
		}
	}
	
	for(int i= 0; i < t; i++){
		for(int j = 0; j < t; j++){
			if (j == t-1){
				printf("%d", mat[i][j]);	
			}
			else{
				printf("%d ", mat[i][j]);
			}
		}
		printf("\n");
	}
}