#include <stdio.h>

int main () {
	
	float salario_fixo, valor_vendas, total;
	
	printf ("Salario fixo: ");
	scanf ("%f", &salario_fixo);
	
	printf ("Valor total das vendas efetuadas: ");
	scanf ("%f", &valor_vendas);
	
	
	if (valor_vendas <= 1500) {
		
		printf ("Salario Total: %.2f", salario_fixo + (valor_vendas * 0.03));
		
	} else {
	
		printf ("Salario Total: %.2f", salario_fixo + ((valor_vendas - (valor_vendas - 1500)) * 0.03) + ((valor_vendas - 1500) * 0.05));
	}
	
	return 0;
}
