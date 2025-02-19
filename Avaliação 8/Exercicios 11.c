#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Função para verificar se um número é primo
int ehPrimo(int num) {
    if (num <= 1) return 0; // Números menores ou iguais a 1 não são primos
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return 0; // Encontrou um divisor, não é primo
    }
    return 1; // É primo
}

// Função para encontrar o n-ésimo número primo
int enesimoPrimo(int n) {
    int count = 0; // Contador de números primos encontrados
    int num = 2;   // O primeiro número a ser verificado

    while (count < n) {
        if (ehPrimo(num)) {
            count++;
        }
        num++;
    }

    return num - 1; // Retorna o n-ésimo número primo
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int n;

    // Solicita ao usuário para digitar o valor de n
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Verifica se n é válido
    if (n <= 0) {
        printf("O valor de n deve ser um número inteiro positivo.\n");
    } else {
        // Encontra e exibe o n-ésimo número primo
        printf("O %d-ésimo número primo é: %d\n", n, enesimoPrimo(n));
    }

    return 0;
}

