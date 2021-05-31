#include <stdio.h>

int main(){
	float valorPH;
	scanf("%g", &valorPH);
	
	if (valorPH < 7){
		printf("Acida");
	}
	
	else if (valorPH > 7){
		printf("Basica");
	}
	
	else{
		printf("Neutra");
	}
	
}