#include<stdio.h>
#include<locale.h>
//Fa�a programa em C que calcule e imprime a soma dos inteiros de 1 a 10. Utilize as
//estruturas while e do..while para fazer um la�o com as instru��es de c�lculo 
//e incremento. O la�o deve terminar quando o valor de x se tornar 11
main() {
	setlocale(LC_ALL, "");
	
	int soma = 0, x = 0;
	
	printf("\n\t===> Utilizando While: ");
	
	while(x <= 10) {
		soma +=  x;
		x ++;
	}
	printf("\n\t Soma de 1 a 10: %i",soma);
	printf("\n\t Valor de x: %i", x);
	
	
	soma = 0, x = 0;
	
	printf("\n\t===> Utilizando Do While: ");
	
	do {
		soma += x; 
		x ++;
	} while(x <= 10);
	printf("\n\t Soma de 1 a 10: %i",soma);
	printf("\n\t Valor de x: %i", x);
}
