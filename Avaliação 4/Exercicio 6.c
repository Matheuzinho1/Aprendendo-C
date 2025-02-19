#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
setlocale(LC_ALL,"Portuguese");

//VARIAVEIS
float num1, num2, num3, num4;
float res;

//ENTRADA DE DADOS
printf("Insira o primeiro numero do per�metro:");
scanf("%f", &num1);
printf("Insira o segundo numero do per�metro:");
scanf("%f", &num2);
printf("Insira o terceiro numero do per�metro:");
scanf("%f", &num3);
printf("Insira o quarto numero do per�metro:");
scanf("%f", &num4);
	
//PROCESSAMENTO
res = num1 + num2 + num3 + num4;
	
//SAIDA DE DADOS
printf("O resutado �: %.2f", res);

getch();
}
