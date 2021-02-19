#include<stdio.h>

#define tax 0.07
#define bonus 0.05
main(){
    float salario;

    printf("Informe o salario: ");
    scanf("%f",&salario);
    salario = (salario+(salario*bonus))-(salario*tax);

    printf("O salario apos tributaçâo e bonificacao e igual a $%.2f",salario);

}
