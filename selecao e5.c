#include <stdio.h>

main(){
	float saly, bills;
	printf("Informe o salario: ");
	scanf("%f", &saly);
	printf("Informe o total de suas despezas: ");
	scanf("%f", &bills);
	if(bills > saly){
		printf("\nOr�amento estourado.");
	}
	else if (bills < saly && saly > 0 ){
		printf("Gastos dentro do or�amento.");
	}
}
