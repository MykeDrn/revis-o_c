#include <stdio.h>

main(){
	float cl;
	printf("Informe o valor da conta de luz: ");
	scanf("%f", &cl);
	if(cl > 350.00){
		printf("\nVoc� est� gastando muito.");
	}
	else {
		printf("Seu gasto foi normal.");
	}
}
