#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int ehPrimo(int num) {
    if (num <= 1) return 0; 

    for (int i = 2; i < num; i++) {
        if (num % i == 0) return 0; 
    }

    return 1; 
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

    return 0;
}

