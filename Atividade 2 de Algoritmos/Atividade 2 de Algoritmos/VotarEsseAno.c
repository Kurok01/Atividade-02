#include <stdio.h>

int main () {
	
	//Aqui estou considerando a idade minima para votar, que eh 16, e nao a obrigatoria que eh 18.
	
	int ano_atual, ano_nascimento, idade;
	
	printf ("Qual eh o ano atual? ");
	scanf ("%d", &ano_atual);
	
	printf ("Em que ano voce nasceu? ");
	scanf ("%d", &ano_nascimento);
	
	idade = ano_atual - ano_nascimento;
	
 	if (ano_atual % 2 == 0) {
 		
 		if (idade >= 16) {
 			
 			printf ("Voce podera votar esse ano.");
 			
		 } else {
		 	
		 	printf ("Voce nao podera votar esse ano.");
		 }
	 } else {
	 	
	 	printf ("Nao estamos em ano de eleicao");
	 }

	return 0;
}
