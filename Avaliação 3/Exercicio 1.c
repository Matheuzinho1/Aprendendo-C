#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale (LC_ALL, "Portuguese");
	int num1;
	
	printf("Escreva a idade da pessoa: ");
	scanf ("%d",&num1);
	
	if (num1 > 18){ 
		printf("A pessoa � maior de idade");
	}
	if (num1 < 18){ 
		printf("A pessoa n�o � maior de idade");
	}	
	getch();
}
