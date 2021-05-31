#include <stdio.h>

int main(){
	int avela, caramelo, passas;
	int quant_avela, quant_caramelo, quant_passas;
	float valor;
	
	scanf("%d %d %d",&avela, &caramelo, &passas);
	scanf("%d %d %d",&quant_avela, &quant_caramelo, &quant_passas);
	
	valor = ((avela*quant_avela)+(caramelo*quant_caramelo)+(passas*quant_passas));
	
	printf("Valor: R$%.2f", valor);
	
}