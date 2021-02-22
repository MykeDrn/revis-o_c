#include <stdio.h>

main(){
    int n, j, i, k = 0;
    printf("Digite a menor idade: ");
    fflush(stdin);
    scanf("%d", &n);
    printf("Digite a menor idade: ");
    fflush(stdin);
    scanf("%d", &j);

    for(i=n;i<=j;i++){
        k+=i;
    }
    printf("Somatoria total: %d",k);
}
