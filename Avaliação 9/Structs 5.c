#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

typedef struct {
    float x; 
    float y; 
    float z; 
} Vetor;

Vetor somaVetores(Vetor a, Vetor b) {
    Vetor resultado;
    resultado.x = a.x + b.x;
    resultado.y = a.y + b.y;
    resultado.z = a.z + b.z;
    return resultado;
}

void imprimirVetor(Vetor v) {
    printf("Vetor: (%.2f, %.2f, %.2f)\n", v.x, v.y, v.z);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    Vetor vetor1, vetor2, vetorSoma;

    printf("Insira os componentes do primeiro vetor (x, y, z): ");
    scanf("%f %f %f", &vetor1.x, &vetor1.y, &vetor1.z);

    printf("Insira os componentes do segundo vetor (x, y, z): ");
    scanf("%f %f %f", &vetor2.x, &vetor2.y, &vetor2.z);

    vetorSoma = somaVetores(vetor1, vetor2);

    printf("\nResultado da soma dos vetores:\n");
    imprimirVetor(vetorSoma);

    return 0;
}

