#include<stdio.h>

main() {
    int num, i, resultado = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
        resultado++;
    }
 }

    if (resultado == 0){
        printf("%d e um n�mero primo\n", num);
 }
    else
        printf("%d n�o e um n�mero primo\n", num);
}
