#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

#define MAX_COMPROMISSOS 5
#define MAX_DESCRICAO 60

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    char descricao[MAX_DESCRICAO];
    struct Data data; 
};

int main() {
    setlocale(LC_ALL, "Portuguese"); 

    struct Compromisso compromissos[MAX_COMPROMISSOS];

    int i;
    for (i = 0; i < MAX_COMPROMISSOS; i++) {
        printf("Digite o compromisso %d: ", i + 1);
        scanf(" %[^\n]", compromissos[i].descricao);
        printf("Digite a data (dia, mês e ano) do compromisso %d: ", i + 1);
        scanf("%d %d %d", &compromissos[i].data.dia, &compromissos[i].data.mes, &compromissos[i].data.ano);
    }

    int M, A;
    while (1) {
        printf("\nDigite o mês (1-12) e o ano (ex: 2024) para ver os compromissos (digite 0 para sair): ");
        scanf("%d", &M);
        if (M == 0) {
            break;
        }
        scanf("%d", &A);

        printf("\nCompromissos para o mês %d do ano %d:\n", M, A);
        int encontrou = 0;
        
        for (i = 0; i < MAX_COMPROMISSOS; i++) {
            if (compromissos[i].data.mes == M && compromissos[i].data.ano == A) {
                printf("Compromisso: %s (Data: %02d/%02d/%04d)\n", compromissos[i].descricao, compromissos[i].data.dia, compromissos[i].data.mes, compromissos[i].data.ano);
                encontrou = 1;
            }
        }

        if (!encontrou) {
            printf("Nenhum compromisso encontrado para o mês %d do ano %d.\n", M, A);
        }
    }

    return 0;
}
