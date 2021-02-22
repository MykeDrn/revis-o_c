#include <stdio.h>

main(){
    char sx;
    float saly, msly = 0;
    int trg = 1 , wmnook = 0, idade,ppl = 0;

    while(trg == 1){
        printf("\n==Pesquisa==\n\nIdade: ");
        scanf("%d", &idade);
        printf("Sexo(m ou f): ");
        fflush(stdin);
        scanf("%c", &sx);
        printf("Salario: ");
        scanf("%f", &saly);
        msly = msly + saly;

        switch(sx){

        case 'm':
            ppl++;
            break;

        case 'f' :
            ppl++;
            wmnook++;
            break;
    }

        printf("\nPesquisar novo habitante? (1-sim  0-nao):");
        scanf("%d", &trg);

            while(trg != 1 && trg!=0){

                if (trg !=1 && trg!=0){
                    printf("opcao invalida.");
                    printf("\nPesquisar novo habitante? (1-sim  0-nao):");
                    scanf("%d", &trg);
        }
    }
}

    msly = msly/ppl;
    printf("\nMedia salarial: %.2f\n\n",msly);
    printf("quantidade de mulheres com salário até $1500,00: %d", wmnook);

}
