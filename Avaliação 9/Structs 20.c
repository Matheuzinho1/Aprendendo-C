#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

#define MAX_RECEITAS 5
#define MAX_INGREDIENTES 3

struct Ingrediente {
    char nome[20];
    float quantidade;
};

struct Receita {
    char nome[25];
    int qtdIngredientes;
    struct Ingrediente ingredientes[MAX_INGREDIENTES];
};

int main() {
	setlocale(LC_ALL, "Portuguese");
    struct Receita receitas[MAX_RECEITAS];
    int i, j;
    
    for (i = 0; i < MAX_RECEITAS; i++) {
        printf("Digite o nome da receita %d: ", i + 1);
        scanf(" %[^\n]", receitas[i].nome);
        
        printf("Quantidade de ingredientes: ");
        scanf("%d", &receitas[i].qtdIngredientes);
        
        for (j = 0; j < receitas[i].qtdIngredientes; j++) {
            printf("Nome do ingrediente %d: ", j + 1);
            scanf(" %[^\n]", receitas[i].ingredientes[j].nome);
            printf("Quantidade do ingrediente %d: ", j + 1);
            scanf("%f", &receitas[i].ingredientes[j].quantidade);
        }
    }

    char busca[25];
    while (1) {
        printf("Digite o nome da receita para buscar (ou digite 0 para sair): ");
        scanf(" %[^\n]", busca);
        
        if (strcmp(busca, "0") == 0) {
            break;
        }
        
        int encontrado = 0;
        for (i = 0; i < MAX_RECEITAS; i++) {
            if (strcmp(receitas[i].nome, busca) == 0) {
                printf("Receita: %s\n", receitas[i].nome);
                for (j = 0; j < receitas[i].qtdIngredientes; j++) {
                    printf("- %s: %.2f\n", receitas[i].ingredientes[j].nome, receitas[i].ingredientes[j].quantidade);
                }
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            printf("Receita '%s' não encontrada.\n", busca);
        }
    }

    return 0;
}

