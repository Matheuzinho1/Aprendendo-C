#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "Portuguese");

    float numero1, numero2;
    float resultado;

    printf("Insira o valor do primeiro n�mero\n");
    scanf("%f", &numero1);

    printf("Insira o valor do segundo n�mero\n");
    scanf("%f", &numero2);

    resultado = numero1 + numero2;

    printf("Valor da soma �: R$ %.2f", resultado);
    getch();
}
