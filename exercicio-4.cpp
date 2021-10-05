#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#define CACHORRO 1.5
#define HAMBURGUER 2
#define CHEESEBURGUER 2.5
#define EGGSBURGUER 3
#define REFRIGERANTE 1.5
//Faça um programa que leia o código dos produtos pedidos e as quantidades desejadas;
//calcule e mostre o valor a ser pago por produto (preço * quantidade) e o total
//do pedido. Considere que o cliente deve informar quando o pedido deve ser encerrado
main(){
	setlocale(LC_ALL,"");
	
	char opcao;
	int quantidade, qtdCachorro=0, qtdHamburguer=0;
	int qtdCheese=0, qtdEggs=0, qtdRefri=0;
	float total=0;

	while(toupper(opcao) != 'S'){
		printf("\n Escolha uma das opções: ");
		printf("\n 1- Cachorro quente");
		printf("\n 2- Hamburguer");
		printf("\n 3- Cheeseburguer");
		printf("\n 4- Eggcheeseburguer");
		printf("\n 5- Refrigerante");
		printf("\n S- Sair ==> ");
		fflush(stdin);
		scanf("%c", &opcao);
		
		if (toupper(opcao) != 'S'){
			printf("\n Informe a quantidade: ");
			scanf("%i", &quantidade);
		}
		
		switch(toupper(opcao)){
			case '1': (qtdCachorro += quantidade);
				total += quantidade * CACHORRO;
				break;
			case '2': (qtdHamburguer += quantidade);
				total += quantidade * HAMBURGUER;
				break;
			case '3': (qtdCheese += quantidade);
				total += quantidade * CHEESEBURGUER;
				break;
			case '4': (qtdEggs += quantidade);
				total += quantidade * EGGSBURGUER;
				break;
			case '5': (qtdRefri += quantidade);
				total += quantidade * REFRIGERANTE;
				break;
			case 'S': printf("\n Sair e encerrar a conta!");
				break;
			default: printf("\n Opção inválida!");
		}
	}
	
	printf("\n ######CUPOM FISCAL######");
	
	if (qtdCachorro > 0){
		printf("\n\t %i Cachorro(s) ==> R$ %.2f", qtdCachorro, qtdCachorro*CACHORRO);
	}
	
	if (qtdHamburguer > 0){
		printf("\n\t %i Hamburguer(s) ==> R$.2f ", qtdHamburguer,qtdHamburguer*HAMBURGUER);
	}
	
	if (qtdCheese > 0){
		printf("\n\t %i Cheeseburguer(s) ==> R$.2f", qtdCheese,qtdCheese*CHEESEBURGUER);
	}
	
	if (qtdEggs > 0){
		printf("\n\t %i Eggscheeseburguer(s) ==> R$.2f ", qtdEggs,qtdEggs*EGGSBURGUER);
	}
	
	if (qtdRefri > 0){
		printf("\n\t %i Refrigerante(s) ==> R$.2f", qtdRefri,qtdRefri*REFRIGERANTE);
	}
	
	printf("\n\t TOTAL %.2f", total);
}
