#include <stdio.h>

/*
 Professor, por algum motivo sempre que eu usava == ou =!
 na estrutura de sele��o sempre sa�a o else, ent�o fiz da forma que est� sendo entregue.
*/

main(){
    int n1, n2, trg = 1;
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    if(n1 != n2)
        printf("os numeros sao diferentes");
    else{
        printf("os numeros sao iguais");
    }
}
