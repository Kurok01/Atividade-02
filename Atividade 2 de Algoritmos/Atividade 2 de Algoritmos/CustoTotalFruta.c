#include <stdio.h>

int main () {
	
	int maca_fruta;
	float total;
	
	printf ("Quantas macas (fruta) foram compradas? ");
	scanf ("%d", &maca_fruta);
	
	if (maca_fruta >= 12) {
		
		printf ("O total da sua compra foi de: %.2f", total = maca_fruta * 1);
		
	} else {
		
		printf ("O total da sua compra foi de: %.2f", total = maca_fruta * 1.30);
	}
	
	return 0;
}
