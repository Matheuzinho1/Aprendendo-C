#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int ehPrimo(int n) {
    if (n <= 1) return 0; 
    if (n == 2) return 1; 
    if (n % 2 == 0) return 0; 

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }

    return 1;
}

int ContaPrimos(int inicio, int fim) { 
    int contador = 0;

    if (inicio > fim) {
        int temp = inicio;
        inicio = fim;
        fim = temp;
    }

    for (int i = inicio; i <= fim; i++) {
        if (ehPrimo(i)) {
            contador++;
        }
    }

    return contador;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    printf("Digite dois n�meros inteiros (separados por espa�o): ");
    scanf("%d %d", &num1, &num2);

    int resultado = ContaPrimos(num1, num2);
    printf("N�mero de primos entre %d e %d �: %d\n", num1, num2, resultado);

    return 0;
}

