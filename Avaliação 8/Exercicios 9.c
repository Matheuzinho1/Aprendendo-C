#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int verificaCondicao(int a, int b, int c) {
    return (a > b && b > c);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if (verificaCondicao(a, b, c)) {
        printf("A condi��o a > b > c � verdadeira.\n");
    } else {
        printf("A condi��o a > b > c � falsa.\n");
    }

    return 0;
}

