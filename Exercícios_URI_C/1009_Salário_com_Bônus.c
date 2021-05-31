#include <stdio.h>

int main(){
	char nome[10];
	double salario_fixo, num_vendas, salario_final;
	scanf("%s%lf%lf", nome, &salario_fixo, &num_vendas);
	salario_final = salario_fixo + (num_vendas*0.15);
	printf("TOTAL = R$ %.2lf\n",salario_final);
	return 0;
}