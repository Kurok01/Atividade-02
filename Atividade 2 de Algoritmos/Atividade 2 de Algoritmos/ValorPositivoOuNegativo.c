#include <stdio.h>

int main () {
	
	int valor;
	
	printf ("Digite um valor: ");
	scanf ("%d", &valor);
	
	if (valor >= 0) {
		
		printf ("O valor eh positivo!");
		
	} else {
		
		printf ("O valor eh negativo!");
	}
	
	return 0;
}
