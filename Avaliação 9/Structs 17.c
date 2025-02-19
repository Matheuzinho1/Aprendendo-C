#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

#define MAX_ELETRODOMESTICOS 5

struct Eletrodomestico {
    char nome[15];
    float potencia;  
    float horasPorDia; 
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Eletrodomestico eletro[MAX_ELETRODOMESTICOS];
    float tempoDias, consumoTotal = 0.0;
    int i;

    for (i = 0; i < MAX_ELETRODOMESTICOS; i++) {
        printf("Digite o nome do eletrodoméstico %d: ", i + 1);
        scanf(" %14[^\n]", eletro[i].nome);
        printf("Digite a potência (em kW) do %s: ", eletro[i].nome);
        scanf("%f", &eletro[i].potencia);
        printf("Digite o tempo ativo por dia (em horas) do %s: ", eletro[i].nome);
        scanf("%f", &eletro[i].horasPorDia);
    }

    printf("\nDigite o tempo em dias para cálculo do consumo: ");
    scanf("%f", &tempoDias);

    for (i = 0; i < MAX_ELETRODOMESTICOS; i++) {
        consumoTotal += eletro[i].potencia * eletro[i].horasPorDia * tempoDias;
    }

    printf("\nConsumo total na casa em %.1f dias: %.2f kWh\n", tempoDias, consumoTotal);
    printf("\nConsumo relativo de cada eletrodoméstico:\n");

    for (i = 0; i < MAX_ELETRODOMESTICOS; i++) {
        float consumoRelativo = (eletro[i].potencia * eletro[i].horasPorDia * tempoDias) / consumoTotal * 100;
        printf("%s: %.2f%%\n", eletro[i].nome, consumoRelativo);
    }

    return 0;
}

