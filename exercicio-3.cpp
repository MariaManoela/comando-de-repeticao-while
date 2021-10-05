#include<stdio.h>
#include<locale.h>
//Foi realizada uma pesquisa de algumas características físicas da população de uma certa
//região, a qual coletaram os seguintes dados referentes a cada habitante para serem
//analisados:
//- sexo (masculino e feminino)
//- cor dos olhos (azuis, verdes ou castanhos)
//- cor dos cabelos (louros, castanhos, pretos)
//- idade
//Faça um algoritmo que determine e escreva:
//- a maior idade dos habitantes;
//- a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e
//- 35 anos, inclusive;
//- a quantidade de indivíduos que tenham olhos verdes e cabelos louros;
//O final do conjunto de habitantes é reconhecido pelo valor -1 informado como
//idade
main() {
	setlocale(LC_ALL, "");
	
	char sexo, olhos, cabelo;
	int idade, qtd1=0, qtd2=0, qtd3=0; 
	// qtd1 = a maior idade dos habitantes;
	// qtd2 = a quantidade de individuos do sexo feminino cuja idade esta entre 18 e 35 anos, inclusive;
	// qtd3 = a quantidade de indivíduos que tenham olhos verdes e cabelos louros
	
	do{
		printf("\nInforme a idade: ");
		scanf("%i",&idade);
		
		if(idade!=-1){
			if(idade>qtd1) qtd1=idade;
			do{
				printf("\nInforme o sexo:\nM - Masculino\nF - Feminino ==>  ");
				fflush(stdin);
				scanf("%c",&sexo);
				sexo=toupper(sexo);	
				if(sexo!='F' && sexo!='M') printf("\n\t ERRO ==> Informe F ou M \n");		
			}while(sexo!='F' && sexo!='M');
			
			if(idade>=18 && idade<=35 && sexo=='F') qtd2++;
			
			do{
				printf("\nInforme a cor dos olhos:\nA - Azuis\nV - Verdes\nC - Castanhos ==> ");
				fflush(stdin);
				scanf("%c",&olhos);
				olhos=toupper(olhos);	
				if(olhos!='A' && olhos!='V' && olhos!='C') printf("\n\t ERRO ==> Informe A, V ou C \n");		
			}while(olhos!='A' && olhos!='V' && olhos!='C');
			
			
			do{
				printf("\nInforme a cor dos cabelos:\nL - Louros\nP - Pretos\nC - Castanhos ==> ");
				fflush(stdin);
				scanf("%c",&cabelo);
				cabelo=toupper(cabelo);	
				if(cabelo!='L' && cabelo!='P' && cabelo!='C') printf("\n\t ERRO ==> Informe A, P ou C \n");		
			}while(cabelo!='L' && cabelo!='P' && cabelo!='C');
			
			if(olhos=='V' && cabelo=='L') qtd3++;
			
		}
	}while(idade!=-1);
	printf("\n #################### RESULTADO DA PESQUISA ############################ \n");
	printf("\n Maior idade entre os habitantes: %i ", qtd1);
	printf("\n Individuos do sexo feminino cuja idade esta entre 18 e 35 anos: %i ", qtd2);
	printf("\n Quantidade de indivíduos que tenham olhos verdes e cabelos louros: %i ", qtd3);
	
	printf("\n\n #########################################################################\n");

}

