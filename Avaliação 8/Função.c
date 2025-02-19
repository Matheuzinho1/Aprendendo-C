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
	
	printf("A média dos números inseridos é: %.2f", media);
	
}
			// São quatro tipos de funções
// 1. função sem parametro e sem retorno
// 2. função com parametro e sem retorno
// 3. função sem parametro e com retorno
// 4. função com parametro e com retorno

//parametro valor passado dentro do parenteses
//retorno palavra reservada que devolve um valor de uma função

void inserir(char texto[10]){
	printf("Insira o %s valor: ",texto);
	
}
int lerVariavel(){
	int n;
	scanf("%d", &n);
	return n;
}
