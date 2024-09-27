#include <stdio.h>

int main () {
	
	float nota1, nota2, media;
	
	printf ("Digite a primeira nota: ");
	scanf ("%f", &nota1);
	
	printf ("Digite a segunda nota: ");
	scanf ("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf ("A media do aluno foi de: %.2f\n\n", media);
	
	if (media >= 7) {
		
		printf ("O aluno esta aprovado!");
		
	} else {
		
		printf ("O aluno esta reprovado!");
	}
	
	return 0;
}
