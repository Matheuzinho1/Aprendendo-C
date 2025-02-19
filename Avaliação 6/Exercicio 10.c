#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numA[200];

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));
    int i, j, numT;

    for (i = 0; i < 200; i++) {
        numA[i] = rand() % 300;
    }

    for (i = 0; i < 200 - 1; i++) {
        for (j = 0; j < 200; j++) {
            if (numA[j] > numA[j + 1]) {
                numT = numA[j];
                numA[j] = numA[j + 1];
                numA[j + 1] = numT;
            }
        }
    }

    printf("\nVetor ordenado em ordem crescente:\n");
    for (i = 0; i < 200; i++) {
        printf("%d ", numA[i]);
    }
    printf("\n");

    getchar();
}