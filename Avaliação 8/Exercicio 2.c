#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float maiorValor(float a, float b, float c) {
    float maior = a;
    
    if (b > maior) {
        maior = b;
    }
    
    if (c > maior) {
        maior = c;
    }
    
    return maior;
}
int main() {
	setlocale(LC_ALL, "Portuguese");
    float valor1, valor2, valor3;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    
    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);
    
    float resultado = maiorValor(valor1, valor2, valor3);
    
    printf("O maior valor é: %.2f\n", resultado);
 
	return 0;   
}
