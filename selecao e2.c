#include <stdio.h>

main(){
    float total;
    int discount;
    printf("Total da compra: ");
    scanf("%f", &total);
    printf(" 1--Cliente comum\n 2--Funcionario\n 3--Cliente vip\n\nSelecione o cupom de desconto:  ");
    scanf("%d", & discount);
    switch(discount)
    {
        case 1 :
            // cliente comum
            printf("\nO preço total da compre é $%.2f",total);
            break;

        case 2 :
            // funcionario 10%
            total = total - (total*0.10);
            printf("\nO preço total da compre é $%.2f",total);
            break;

        case 3 :
            // vip 5%
            total = total - (total*0.05);
            printf("\nO preço total da compre é $%.2f",total);
            break;

        default :
            printf ("\nDisconto invalido.");
    }
}
