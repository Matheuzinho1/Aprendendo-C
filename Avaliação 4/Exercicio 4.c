#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
setlocale(LC_ALL,"Portuguese");

//VARIAVEIS
float num1, num2, num3, num4, num5, num6, res1, res2, res3;

//ENTRADA DE DADOS	
printf("Insira o primeiro numero da soma:");
scanf("%f", &num1);
printf("Insira o segundo numero da soma:");
scanf("%f", &num2);
printf("Insira o terceiro numero da soma:");
scanf("%f", &num3);
printf("Insira o quarto numero da soma:");
scanf("%f", &num4);
printf("Insira o quinto numero da multiplica��o:");
scanf("%f", &num5);
printf("Insira o sexto numero da divis�o:");
scanf("%f", &num6);
	
//PROCESSAMENTO
res1 = (num1 + num2 + num3 + num4);
res2 = res1 * num5;
res3 = res2 / num6;
	
//SAIDA DE DADOS
printf("O resutado �: %.2f", res3);

getch();
}
