#include <stdio.h>

int main(){
	float salario, aumento, final;
	int percentual;
	
	scanf("%f", &salario);
	
	if (salario <= 280){
		percentual = 20;
    	aumento = (salario*1.20) - salario;
    	final = salario*1.20;
	}
	
	else if (salario > 280 && salario <= 700){
		percentual = 15;
    	aumento = (salario*1.15) - salario;
    	final = salario*1.15;
	}
	
	else if (salario > 700 && salario < 1500){
		percentual = 10;
        aumento = (salario*1.10) - salario;
        final = salario*1.10;
	}
	
	else if (salario >= 1500){
		percentual = 5;
    	aumento = (salario*1.05) - salario;
    	final = salario*1.05;
	}
	
                   
    printf("%.2f\n", salario);
    printf("%d\n", percentual);
    printf("%.2f\n",aumento);
    printf("%.2f",final);
}
