#include<stdio.h>

main(){
    int brn, tsyr;

    printf("Informe o ano de nascimento: ");
    scanf("%d",&brn);
    printf("\nInforme o ano atual: ");
    scanf("%d",&tsyr);
    printf("\nvoce tem %d anos de idade.",tsyr-brn);
    printf("\nEm 2038 voce vai ter %d anos de idade.",2038-brn);

}
