#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main (void){
    setlocale(LC_ALL, "Portuguese");

    int numero, fatorial = 1, i;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    printf("%d! = ", numero);

    for (i = numero; i >= 1; i--) {
        printf("%d", i);

        if (i != 1) {
            printf(" x ");
        }
        fatorial *= i;
    }
    printf(" = %d\n", fatorial);
    getch();
}
