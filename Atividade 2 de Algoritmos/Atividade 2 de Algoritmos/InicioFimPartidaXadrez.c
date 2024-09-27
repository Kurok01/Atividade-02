#include <stdio.h>

int main () {
	
	int hora_inicio, hora_fim, duracao;
	
	printf ("A que horas comecou a partida de xadrez? (Inserir somente as horas, desconsiderar minutos) ");
	scanf ("%d", &hora_inicio);
	
	printf ("A que horas a partida foi finalizada? (Inserir somente as horas, desconsiderar minutos) ");
	scanf ("%d", &hora_fim);
	
	if (hora_fim > 24 || hora_inicio > 24 ) {
		
		printf ("Valores invalidos!");
		
	} else {
	
		if (hora_fim > hora_inicio) {
			
			printf ("A duracao da partida foi de: %d", duracao = hora_fim - hora_inicio);
			
		} else {
			
			printf ("A duracao da partida foi de: %d", duracao = (hora_fim + 24) - hora_inicio);
		}
	
	}
	
	return 0;
}
