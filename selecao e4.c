#include <stdio.h>

main(){
    float saly, prest, scheck;
    printf("Sal�rio bruto: ");
    scanf("%f", &saly);
    printf("Presta��o: ");
    scanf("%f", &prest);
    scheck = (saly*0.30);
    if(prest > scheck){
	printf("O emprestimo nao pode ser concedido");
  }
    else{
	printf("O emprestimo pode ser concedido");
}

}
