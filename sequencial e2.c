#include <stdio.h>

main(){
    float n1;
    printf("-=Convertem polegadas em centimetros=-");
    printf("\n\nDigite a medida em polegadas: ");
    scanf("%f",&n1);
    printf(" \n\n%.2f polegedas equivalem a %.2f centimetros.",n1,(n1*2.54));
}
