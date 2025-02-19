#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

#define V 5 
#define A 5  


struct Voo {
    int origem;
    int destino;
};

struct Aeroporto {
    int codigo;
    int voos_saida;
    int voos_chegada;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Voo voos[V];
    struct Aeroporto aeroportos[A];
    int i;

    for (i = 0; i < A; i++) {
        aeroportos[i].codigo = i;
        aeroportos[i].voos_saida = 0;
        aeroportos[i].voos_chegada = 0;
    }

    printf("Digite as informações dos voos:\n");
    for (i = 0; i < V; i++) {
        int origem, destino;

        do {
            printf("Voo %d - Código do aeroporto de origem (0 a %d): ", i + 1, A - 1);
            scanf("%d", &origem);
            if (origem < 0 || origem >= A) {
                printf("Código de aeroporto inválido! Tente novamente.\n");
            }
        } while (origem < 0 || origem >= A);

        do {
            printf("Voo %d - Código do aeroporto de destino (0 a %d): ", i + 1, A - 1);
            scanf("%d", &destino);
            if (destino < 0 || destino >= A) {
                printf("Código de aeroporto inválido! Tente novamente.\n");
            }
        } while (destino < 0 || destino >= A);

        voos[i].origem = origem;
        voos[i].destino = destino;

        aeroportos[origem].voos_saida++;
        aeroportos[destino].voos_chegada++;
    }

    printf("\nFluxo de voos em cada aeroporto:\n");
    for (i = 0; i < A; i++) {
        printf("Aeroporto %d - Voos que saem: %d, Voos que chegam: %d\n",
               aeroportos[i].codigo, aeroportos[i].voos_saida, aeroportos[i].voos_chegada);
    }

    return 0;
}
