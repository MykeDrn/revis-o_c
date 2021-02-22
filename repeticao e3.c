#include <stdio.h>

main(){
    int n, i, tab;

    do
        {
        printf("\nTabuada a ser calculada (de 1 a 10): ");
        scanf("%d", &n);

        if(n < 1 || n > 10 ){
            printf("Numero invalido.\n\n");
        }


    }while(n < 1 || n > 10 );

    for(i=1; i<=10; i++){
        tab = i*n;
        printf("%d * %d = %d\n\n", i, n, tab);
    }


}
