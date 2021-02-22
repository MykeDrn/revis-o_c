#include<stdio.h>

main(){
	int i = 0, num=0, neg=0, buff = 0;

	for(i; i<20; i++){
		printf("\nDigite o numero: ");
        scanf("%d", &num);
		if(num < 0){
		    neg++;
	}
		else{
			buff+=num;
	}
   }
	printf("\nSoma dos numeros positivos: %d", buff);
	printf("\nQuantidade de numeros negativos: %d", neg);
}
