#include<stdio.h>

main(){
    int i = 25, j = 0;

    for (i; i <= 200; i++){

        if(i%2 == 0){
            j+=i;
        }
    }
    printf("soma dos números pares entre 25 e 200. : %d", j);
}
