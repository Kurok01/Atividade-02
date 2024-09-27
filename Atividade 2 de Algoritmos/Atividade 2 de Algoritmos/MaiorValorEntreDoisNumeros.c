#include <stdio.h>

int main () {
	
	//Considerando que nao serao digitados valores iguais como o ser pediu, entao nao criei nenhum fallback
	
	int valor1, valor2;
	
	printf ("Digite um valor: ");
	scanf ("%d", &valor1);
	
	printf ("Digite outro valor, diferente do primeiro: ");
	scanf ("%d", &valor2);
	
	if (valor1 > valor2) {
		
		printf ("%d eh o maior valor!", valor1);
		
	} else if (valor2 > valor1) {
		
		printf ("%d eh o maior valor!", valor2);
	}

}
