#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL,"Portuguese");
	
	int numero1, numero2;
	int resultado;
	
	
	printf("Insira o primeiro valor da multiplicação:\n");
	scanf ("%d", &numero1);		
	
	printf("Insira o segundo valor da multiplicação:\n");
	scanf ("%d", &numero2);	
	
	resultado = numero1 * numero2;
	
	printf("resultado da multiplicação: %d\n", resultado);
	getch();
}
