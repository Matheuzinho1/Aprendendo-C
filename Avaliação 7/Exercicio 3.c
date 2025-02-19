#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor_a[10], vetor_b[10], resultado[10];
    int i;
    
    printf("Insira 10 valores para o vetor A:\n");
    for(i = 0; i < 10; i++){
        printf("Vetor A[%d]: ", i);
        scanf("%d", &vetor_a[i]);
    }
    
    printf("\nInsira 10 valores para o vetor B:\n");
    for(i = 0; i < 10; i++){
        printf("Vetor B[%d]: ", i);
        scanf("%d", &vetor_b[i]);
    }
    
    for(i = 0; i < 10; i++){
        resultado[i] = vetor_a[i] * vetor_b[i];
    }
    
    printf("\nResultados da multiplicação dos vetores:\n");
    for(i = 0; i < 10; i++){
        printf("Vetor A[%d] * Vetor B[%d] = %d\n", i, i, resultado[i]);
    }
}

