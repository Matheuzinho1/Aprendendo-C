#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void) {
setlocale (LC_ALL, "Portuguese");

//VARIAVEIS
float n1, res1, res2;

//ENTRADA DE DADOS
printf("Insira a conta de luz em KWH: ");
scanf("%f", &n1);

//PROCESSAMENTO E SAIDA DE DADOS
if (n1 > 100) {
    res1 = n1 * 1.05;
    printf("O valor total a ser pago será R$%.2f\n", res1);
} else {
    res2 = n1 * 0.75;
    printf("O valor total a ser pago será R$%.2f", res2);
}

getch();
}

