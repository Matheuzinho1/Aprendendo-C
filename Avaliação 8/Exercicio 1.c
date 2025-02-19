#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somar(int a, int b) {
    int soma = a + b;  
    if (soma < 0) {   
        return 0;      
    }
    return soma;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num1, num2, resultado;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    resultado = somar(num1, num2);
    
    printf("O resultado da soma é: %d\n", resultado);
    
    return 0;
}
