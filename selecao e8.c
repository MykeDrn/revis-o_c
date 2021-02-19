#include<stdio.h>

main(){
	int cod, qtd;
	float ttl;
	printf("Cardapio\n\n");
	printf("----produto---------cod---preço\n");
	printf("cachorro quente-----100---1.20\n");
	printf("bauru simples-------101---1.30\n");
	printf("bauru com ovo-------102---1.50\n");
	printf("Hamburguer----------103---1.20\n");
	printf("cheeseburguer-------104---1.30\n");
	printf("Refrigerante--------105---1.00\n\n");
	printf("Informe o codigo do pedido: ");
	scanf("%d", &cod);
	printf("Informe a quantidade: ");
	scanf("%d", &qtd);
	switch(cod){
	case 100 :
		ttl = qtd*1.20;
		printf("Total a ser pago: $%.2f", ttl);
		break;
	case 101 :
		ttl = qtd*1.30;
		printf("Total a ser pago: $%.2f", ttl);
		break;

	case 102 :
		ttl = qtd*1.50;
		printf("Total a ser pago: $%.2f", ttl);
		break;

	case 103 :
		ttl = qtd*1.20;
		printf("Total a ser pago: $%.2f", ttl);
		break;

	case 104 :
		ttl = qtd*1.30;
		printf("Total a ser pago: $%.2f", ttl);
		break;

	case 105 :
		ttl = qtd*1.00;
		printf("Total a ser pago: $%.2f", ttl);
		break;

	default:
		printf("\n\nCodigo invalido.");
	}
}
