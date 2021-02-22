#include <stdio.h>

main(){
	int num = 1, count = 0;

	do{
		printf("\n\nDigite o numero (0 para sair): ");
		scanf("%d", &num);
		if(num > 100 && num <200){
			count++;
		}

	    printf("\nQuantidade de numeros entre 100 e 200:%d", count);
	}
	while(num != 0);
}
