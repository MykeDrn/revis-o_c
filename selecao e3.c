#include <stdio.h>

main(){
    int num;
    printf(" Informe o numero: ");
    scanf("%d", &num);
    if (num%5 == 0){
        printf("\n %d e divisivel por 5", num);
    }
    else {
        printf("\n %d nao e divisivel por 5", num);
    }
}
