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
    
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);
    
    resultado = somar(num1, num2);
    
    printf("O resultado da soma �: %d\n", resultado);
    
    return 0;
}
