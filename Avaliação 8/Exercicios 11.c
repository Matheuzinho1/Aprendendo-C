#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Fun��o para verificar se um n�mero � primo
int ehPrimo(int num) {
    if (num <= 1) return 0; // N�meros menores ou iguais a 1 n�o s�o primos
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return 0; // Encontrou um divisor, n�o � primo
    }
    return 1; // � primo
}

// Fun��o para encontrar o n-�simo n�mero primo
int enesimoPrimo(int n) {
    int count = 0; // Contador de n�meros primos encontrados
    int num = 2;   // O primeiro n�mero a ser verificado

    while (count < n) {
        if (ehPrimo(num)) {
            count++;
        }
        num++;
    }

    return num - 1; // Retorna o n-�simo n�mero primo
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int n;

    // Solicita ao usu�rio para digitar o valor de n
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Verifica se n � v�lido
    if (n <= 0) {
        printf("O valor de n deve ser um n�mero inteiro positivo.\n");
    } else {
        // Encontra e exibe o n-�simo n�mero primo
        printf("O %d-�simo n�mero primo �: %d\n", n, enesimoPrimo(n));
    }

    return 0;
}

