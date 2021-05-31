#include <stdio.h>

int main(){
	char frase[1001];
	int N, i, quant, j;
	int alfa[26];
	
	scanf("%d",&N);
	getchar();
	
	for (j=0; j<N; j++){
		gets(frase);
		quant = 0;
		
		for (i=0; i<26; i++){
			alfa[i]=0;
		}
		
		for (i=0; frase[i] != '\0'; i++){
			if (frase[i] >= 'a' && frase[i] <= 'z'){
				alfa[frase[i]-'a']++;
			}
		}
		
		for (i=0; i<26; i++){
			if (alfa[i] >=1){
				quant++;
			}
		}
		
		if (quant==26)
			printf("frase completa\n");
			
		else if (quant >= 13)
			printf("frase quase completa\n");
		
		else
			printf("frase mal elaborada\n");
		
	}
	
	return 0;
}