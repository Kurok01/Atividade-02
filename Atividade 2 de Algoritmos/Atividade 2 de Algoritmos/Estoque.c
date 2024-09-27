#include <stdio.h>

int main () {
	
	int estoque_atual, estoque_max, estoque_min, media;
	
	printf ("Estoque atual do produto: ");
	scanf ("%d", &estoque_atual);
	
	printf ("Limite de estoque do produto: ");
	scanf ("%d", &estoque_max);
	
	printf ("Minimo de estoque do produto: ");
	scanf ("%d", &estoque_min);
	
	media = (estoque_max + estoque_min) / 2;
	
	estoque_atual >= media ? printf ("Nao efetuar compra!") : printf ("Efetuar compra!");
	
	return 0;
}
