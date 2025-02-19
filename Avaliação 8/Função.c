#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, num3, num4;
	float media;
	
	inserir("primeiro");
	num1 = lerVariavel();	
	
	inserir("segundo");
	num2 = lerVariavel();	
	
	inserir("terceiro");
	num3 = lerVariavel();	
	
	inserir("quarto");
	num4 = lerVariavel();
	
	media = (num1 + num2 + num3 + num4) / 4;
	
	printf("A m�dia dos n�meros inseridos �: %.2f", media);
	
}
			// S�o quatro tipos de fun��es
// 1. fun��o sem parametro e sem retorno
// 2. fun��o com parametro e sem retorno
// 3. fun��o sem parametro e com retorno
// 4. fun��o com parametro e com retorno

//parametro valor passado dentro do parenteses
//retorno palavra reservada que devolve um valor de uma fun��o

void inserir(char texto[10]){
	printf("Insira o %s valor: ",texto);
	
}
int lerVariavel(){
	int n;
	scanf("%d", &n);
	return n;
}
