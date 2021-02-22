#include <stdio.h>

main(){
    int idade = 0, i = 0, buff = 0, med;

    for (1; i<5; i++){

        printf("digite a idade: ");
        scanf("%d", &idade);
        buff += idade;
    }
    med = buff/5;
    printf ("media: %d", med);
}
