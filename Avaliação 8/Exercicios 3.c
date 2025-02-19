#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h> 

// Função que calcula a raiz quadrada da soma dos quadrados de dois valores reais
double raiz(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    double num1, num2;
    
    // Solicita ao usuário para digitar dois valores reais
    printf("Digite o primeiro valor real: ");
    scanf("%lf", &num1);
    printf("Digite o segundo valor real: ");
    scanf("%lf", &num2);
    
    // Calcula e exibe o resultado
    double resultado = raiz (num1, num2);
    printf("A raiz quadrada da soma dos quadrados é: %.2f\n", resultado);
    
    return 0;
}

