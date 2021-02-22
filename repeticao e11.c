#include<stdio.h>

main(){
	int i = 0, j = 0, num[15];
    for(i; i<15; i++){
	    printf("\nDigite o numero a ser armazenado: ");
        scanf("%d", &num[i]);
	    }
    for(j; j<15; j++){
	    if(num[j] > 30){
		printf("\n%d é maior que 30.", num[j]);
	}
}

}
