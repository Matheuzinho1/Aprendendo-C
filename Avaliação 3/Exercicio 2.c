#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale (LC_ALL, "Portuguese");
	int num1;
	
	printf("Escreva a idade da pessoa: ");
	scanf ("%d",&num1);
	
	if (num1 > 60){ 
		printf("A pessoa é da melhor idade");
	}
	if (num1 < 60){ 
		printf("A pessoa não é da melhor idade");
	}	
	getch();
}
