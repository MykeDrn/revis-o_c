#include <stdio.h>

main(){
    int fat, n;
    printf("Fatorial a ser calculado: ");
    scanf("%d", &n);

    for(fat = 1; n > 1; n = n - 1){
        fat = fat * n;
    }
    printf("\nFatorial: %d", fat);
}
