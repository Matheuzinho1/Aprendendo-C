#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
setlocale(LC_ALL,"Portuguese");
	
//VARIAVEIS
float num1, num2, num3;
float res;
	
//ENTRADA DE DADOS
printf("Insira o primeiro numero da soma:");
scanf("%f", &num1);
printf("Insira o segundo numero da soma:");
scanf("%f", &num2);
printf("Insira o terceiro numero da soma:");
scanf("%f", &num3);

//PROCESSAMENTO
res = num1 + num2 + num3;
	
//SAIDA DE DADOS
printf("O resutado �: %.2f", res);

getch();
}
