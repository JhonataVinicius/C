#include <stdio.h>

int main(){
	float salario=0, desconto=0;
	float max_salario = 5839.45;
	
	scanf("%f", &salario);
	
	if (salario <= 1751.81){
		desconto = 0.08*salario;
	}
	else if (salario >= 1751.82 && salario <= 2919.72){
		desconto = 0.09*salario;
	}
	else if (salario >= 2919.73 && salario <= 5839.45){
		desconto = 0.11*salario;
	}
	else if (salario > 5839.45){
		desconto = 0.11*5839.45;
	}
	
	printf("Desconto do INSS: R$ %.6f", desconto);
}
