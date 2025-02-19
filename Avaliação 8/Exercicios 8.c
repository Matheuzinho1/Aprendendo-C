#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int somaAlgarismos(int num) {
    int soma = 0;

    num = (num < 0) ? -num : num;

    while (num > 0) {
        soma += num % 10; 
        num /= 10;        
    }

    return soma;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("A soma dos algarismos de %d é: %d\n", numero, somaAlgarismos(numero));

    return 0;
}

