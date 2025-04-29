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

int enesimoPrimo(int n) {
    int count = 0; 
    int num = 2; 

    while (count < n) {
        if (ehPrimo(num)) {
            count++;
        }
        num++;
    }

    return num - 1;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O valor de n deve ser um número inteiro positivo.\n");
    } else {
        printf("O %d-ésimo número primo é: %d\n", n, enesimoPrimo(n));
    }

    return 0;
}

