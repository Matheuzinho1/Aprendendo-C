#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    
    float numero1, numero2, numero3, numero4;
    float resultado, resultadodivisao;
    
    printf("Insira o primeiro valor:\n");
    scanf("%f", &numero1);
    
    printf("Insira o segundo valor:\n");
    scanf("%f", &numero2);
    
    printf("Insira o terceiro valor:\n");
    scanf("%f", &numero3);
    
    printf("Insira o valor da divis�o:\n");
    scanf("%f", &numero4);
    
    resultado = numero1 + numero2 + numero3;
    resultadodivisao = resultado / numero4;
    
    printf("A soma dos valores �: %.2f\n", resultado);
    printf("A divis�o dos valores �: %.2f\n", resultadodivisao);
}
