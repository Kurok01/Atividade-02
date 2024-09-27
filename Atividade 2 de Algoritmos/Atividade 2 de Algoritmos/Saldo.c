#include <stdio.h>

int main () {
	
	float saldo, debito, credito;
	int numero_conta;
	
	printf ("Numero da conta: ");
	scanf ("%d", &numero_conta);
	
	printf ("Debito: ");
	scanf ("%f", &debito);
	
	printf ("Credito: ");
	scanf ("%f", &credito);
	
	saldo = saldo - debito + credito;
	
	printf ("Saldo da conta '%d': R$%.2f \n", numero_conta, saldo);
	
	if (saldo >= 0) {
		printf ("\n------------------\n");
		printf ("Saldo positivo!");
		printf ("\n------------------\n");
		
	} else {
		
		printf ("\n-------------------\n");
		printf ("Saldo negativo!");
		printf ("\n------------------\n");
	}
	
	return 0;
}
