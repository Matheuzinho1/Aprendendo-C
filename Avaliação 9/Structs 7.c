#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>
#include <math.h>

struct Polar {
    float raio;
    float angulo;
};

struct Cartesiana {
    float x;
    float y;
};

struct Cartesiana converterParaCartesiana(struct Polar p) {
    struct Cartesiana c;
    c.x = p.raio * cos(p.angulo);
    c.y = p.raio * sin(p.angulo);
    return c;
}

int main() {
    struct Polar pontoPolar;
    struct Cartesiana pontoCartesiano;

    printf("Digite o raio (r): ");
    scanf("%f", &pontoPolar.raio);

    printf("Digite o ângulo (a) em radianos: ");
    scanf("%f", &pontoPolar.angulo);

    pontoCartesiano = converterParaCartesiana(pontoPolar);

    printf("\nCoordenadas Cartesiana:\n");
    printf("x = %.2f\n", pontoCartesiano.x);
    printf("y = %.2f\n", pontoCartesiano.y);

    return 0;
}
