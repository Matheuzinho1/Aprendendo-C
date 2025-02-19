#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
setlocale (LC_ALL, "portuguese");

int limite;
int razao;
int termo_atual;

printf("insira o limite");
scanf("%d", &limite);

printf("insira a razão");
scanf("%d", &razao);

termo_atual = razao;

printf("progressão arítmetica:\n");

while (termo_atual <= limite){
printf("%d,", termo_atual);
termo_atual += razao;  
	}

printf("\n");
}

