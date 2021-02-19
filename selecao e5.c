#include <stdio.h>

main(){
	float saly, bills;
	printf("Informe o salario: ");
	scanf("%f", &saly);
	printf("Informe o total de suas despezas: ");
	scanf("%f", &bills);
	if(bills > saly){
		printf("\nOrçamento estourado.");
	}
	else if (bills < saly && saly > 0 ){
		printf("Gastos dentro do orçamento.");
	}
}
