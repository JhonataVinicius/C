#include <stdio.h>

int main(){
	int quantidade;
	int vet[2001];
	int i;
	int num;
	
	scanf("%d",&quantidade);
	
	for (i=0;i<=2001;i++){
		vet[i] = 0;
	}
	
	for (i=0;i<quantidade;i++){
		scanf("%d",&num);
		vet[num]++;
	}
	
	for (i=0;i<=2000;i++){
		if (vet[i]!=0){
			printf("%d aparece %d vez(es)\n",i,vet[i]);
		}
	}

    return 0;
}