#include <stdio.h>

main(){
    int n;
    for (n = 1; n<=100; n++){
        printf("\n%d", n);
        if(n%10 == 0){
            printf(" <- Multiplo de 10");
    }}
}
