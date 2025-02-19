#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    
    float numero1, numero2, numero3, numero4;
    float resultado;
    
    printf("Insira o primeiro valor:\n");
    scanf("%f", &numero1);
    
    printf("Insira o segundo valor:\n");
    scanf("%f", &numero2);
    
    printf("Insira o terceiro valor:\n");
    scanf("%f", &numero3);
    
    printf("Insira o quarto valor:\n");
    scanf("%f", &numero4);
    
    resultado = numero1 + numero2 + numero3 + numero4;
    
    printf("A soma dos valores é: %.2f\n", resultado);
}
