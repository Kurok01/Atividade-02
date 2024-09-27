#include <stdio.h>

int main (){
	
	char nome[20], sexo;
	float altura, peso_masculino, peso_feminino;
	
	printf ("Nome: ");
	scanf ("%s", nome);
	
	printf ("Altura: (Em metros. Ex: 1.80) ");
	scanf ("%f", &altura);
	
	printf ("Sexo: (M/F) ");
	scanf (" %c", &sexo);
	
	peso_masculino = (72.7 * altura) - 58;
	peso_feminino = (62.1 * altura) - 44.7;
	
	if (sexo == 'M' || sexo == 'm') {
		
		printf ("Peso ideal de %s: %.2f", nome, peso_masculino);
		
	} else if (sexo == 'F' || sexo == 'f') {
		
		printf ("Peso ideal de %s: %.2f", nome, peso_feminino);	
	} else {
		
		printf ("Algum dado foi inserido incorretamente, tente novamente.");
	}
	
	
	return 0;
}
