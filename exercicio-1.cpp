#include <stdio.h>
#include <locale.h>
//Chico tem 1,50 metros e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metros e
//cresce 3 cent�metros por ano. Construa um algoritmo que calcule e imprima quantos anos
//ser�o necess�rios para que Z� seja maior que Chico
main(){
	setlocale(LC_ALL,"");
	
	float alturaChico = 1.5, alturaZe = 1.1;
	int anos = 0;
	
	while(alturaChico > alturaZe) {
		alturaChico += 0.2;
		alturaZe += 0.3;
		anos ++;
	}
	printf("Ap�s %i anos, a altura de Chico ser� %.2fm e a de Z� ser� %.2fm",anos, alturaChico, alturaZe);;
}
