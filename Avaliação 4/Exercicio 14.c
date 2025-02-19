#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
setlocale(LC_ALL, "Portuguese");

//VARIAVEIS
float num1, res;

//ENTRADA DE DADOS
printf("Insira o valor em pés da altura do avião: ");
scanf("%f", &num1);

//PROCESSAMENTO
res = num1 * 0.3048;

//SAIDA DE DADOS
printf("O resultado da altura do avião em metros é: %.0f\n", res);

getch();
}