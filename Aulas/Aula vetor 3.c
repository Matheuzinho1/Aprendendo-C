#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char nome [10];
char sobrenome [20];

void main(void){
	setlocale(LC_ALL, "Portuguese");
	
int i, pos;

printf("insira seu nome: ");
scanf("%s", &nome);
printf("%s\n", nome);

printf("insira seu sobrenome: ");
scanf("%s", &nome);
printf("%s", nome);

	getch();
}
