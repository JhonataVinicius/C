#include <stdio.h>

int main(){
	int A, B, C, energia, saude=0, consumo, ataque;
	char arma;
	
	scanf("%d %d %d %d %c", &A, &B, &C, &energia, &arma);
	saude = (energia*30)/100;
	
	if(arma == 'C'){
		ataque = 40;
		consumo = 15;
	}
	else if(arma == 'V'){
		ataque = 50;
		consumo = 20;
	}
	

	while(A>0){
		if (energia < saude){
			energia -= (consumo*2);
			A -= ataque;
		}
		else{
			energia -= consumo;
			A -= ataque;
		}
	}
	
	while(B>0){
		if (energia < saude){
			energia -= (consumo*2);
			B -= ataque;
		}
		else{
			energia -= consumo;
			B -= ataque;
		}
	}
	
	while(C>0){
		if (energia < saude){
			energia -= (consumo*2);
			C -= ataque;
		}
		else{
			energia -= consumo;
			C -= ataque;
		}
	}
	
	if (energia > 0){
		printf("Eba! Pedro sobreviveu");
	}
	else{
		printf("Que pena... Era um jovem tao promissor");
	}
}