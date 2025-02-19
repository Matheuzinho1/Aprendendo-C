#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void) {
	setlocale (LC_ALL, "Portuguese");
	float x;
	float y;
	
	printf ("Insira o valor que deseja converter:\n");
	scanf ("%f", &x);
	
	y = x * 4.98;
	
	printf ("O resultado da converção é: %.2f\n", y);
	getch ();
}
