#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
	setlocale(LC_ALL,"Portuguese");
	
	int numero1, numero2;
	int resultado;
	
	printf("Insira o valor do primeiro número\n");
	scanf("%d" ,&numero1);
	
	printf("Insira o valor do segundo número\n");
	scanf("%d" ,&numero2);
	
	resultado = numero1 + numero2;
	
	printf("Valor da soma é : %d",resultado);
	getch();
	}
