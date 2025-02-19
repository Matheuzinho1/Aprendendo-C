#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int inserir(char texto[10]);
void escreva(char texto[200]);

void main (void){
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, num3, num4;
	float media;
	
	escreva("Hello World");
	
	num1 = inserir("primeiro");	
	num2 = inserir("segundo");		
	num3 = inserir("terceiro");		
	num4 = inserir("quarto");
	
	media = (num1 + num2 + num3 + num4) / 4;
	
	printf("A m�dia dos n�meros inseridos �: %.2f", media);
	
}

int inserir(char texto[10]){
	printf("Insira o %s valor: ",texto);
	int n;
	scanf("%d", &n);
	return n; 
}
void escreva(char texto[200]){
	printf("%s \n", texto);
}
