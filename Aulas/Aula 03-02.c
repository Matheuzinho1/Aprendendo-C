#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale (LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("Escreva o primeiro numero: ");
	scanf ("%d",&num1);
	printf("Escreva o segundo numero: ");
	scanf ("%d",&num2);
	
	if (num1 > num2){ 
		printf("O primeiro numero � o maior");
	}
	if (num1 < num2){ 
		printf("O segundo numero � o maior");
	}	
	if (num1 == num2){ 
		printf("Os numeros s�o iguais");
	}
			
	getch();
}
