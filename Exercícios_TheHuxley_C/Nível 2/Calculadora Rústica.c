#include <stdio.h>
#include <string.h>

int main(){
	float num1, num2, resultado;
	char operacao[15];
	
	scanf("%f\n", &num1);
	scanf("%f\n", &num2);
	scanf("%s", operacao);
	
	if(strcmp(operacao,"multiplicacao") == 0){
		resultado = (num1*num2);
	}
	else if(strcmp(operacao,"soma") == 0){
		resultado = (num1+num2);
	}
	else if(strcmp(operacao,"divisao") == 0){
		resultado = (num1/num2);
	}
	else if(strcmp(operacao,"subtracao") == 0){
		resultado = (num1-num2);
	}
	
	printf("resultado = %.2f", resultado);
}