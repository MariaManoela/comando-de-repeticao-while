#include <stdio.h>
#include <locale.h>
//Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metros e
//cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos
//serão necessários para que Zé seja maior que Chico
main(){
	setlocale(LC_ALL,"");
	
	float alturaChico = 1.5, alturaZe = 1.1;
	int anos = 0;
	
	while(alturaChico > alturaZe) {
		alturaChico += 0.2;
		alturaZe += 0.3;
		anos ++;
	}
	printf("Após %i anos, a altura de Chico será %.2fm e a de Zé será %.2fm",anos, alturaChico, alturaZe);;
}
