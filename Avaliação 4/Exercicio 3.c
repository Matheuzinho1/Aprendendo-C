#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
setlocale(LC_ALL,"Portuguese");

//VARIAVEIS
float num1, num2, res;
	
//ENTRADA DE DADOS
printf("Insira o primeiro numero da soma:");
scanf("%f", &num1);
printf("Insira o segundo numero da soma:");
scanf("%f", &num2);
	
//PROCESSAMENTO
res = num1 / num2;
	
//SAIDA DE DADOS
printf("O resutado da soma �: %.2f", res);

getch();
}
