#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL,"Portuguese");
	
	int numero1, numero2;
	int resultado;
	
	
	printf("Insira o primeiro valor da multiplica��o:\n");
	scanf ("%d", &numero1);		
	
	printf("Insira o segundo valor da multiplica��o:\n");
	scanf ("%d", &numero2);	
	
	resultado = numero1 * numero2;
	
	printf("resultado da multiplica��o: %d\n", resultado);
	getch();
}
