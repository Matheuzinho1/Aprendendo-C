#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
setlocale(LC_ALL,"Portuguese");
	
//VARIAVEIS
float num1;
float res;

//ENTRADA DE DADOS
printf("Insira o lado:");
scanf("%f", &num1);
	
//PROCESSAMENTO
res = num1 * sqrt(3) / 2;

//SAIDA DE DADOS
printf("O resutado �: %.2f", res);

getch();
}
