#include <stdio.h>

int main () {
	
	int horas_trabalhadas, horas_extras;
	float salario_total, salario_hora;
	
	printf ("Horas trabalhadas no mes: ");
	scanf ("%d", &horas_trabalhadas);
	
	printf ("Salario por hora: ");
	scanf ("%f", &salario_hora);
	
	salario_total = horas_trabalhadas * salario_hora;
	
	horas_extras = ((horas_trabalhadas - 160) * salario_hora) * 0.50;
	
	
	printf ("Salario Total: %.2f", (horas_trabalhadas <=160 ? salario_total : (horas_extras + salario_total)));
	
	return 0;
}
