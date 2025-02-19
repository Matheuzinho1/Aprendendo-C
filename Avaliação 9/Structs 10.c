#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

#define MAX_PESSOAS 5
#define MAX_NOME 50
#define MAX_ENDERECO 100
#define MAX_TELEFONE 15

struct Pessoa {
    char nome[MAX_NOME];
    char endereco[MAX_ENDERECO];
    char telefone[MAX_TELEFONE];
};

int comparar(const void *a, const void *b) {
    struct Pessoa *p1 = (struct Pessoa *)a;
    struct Pessoa *p2 = (struct Pessoa *)b;
    return strcmp(p1->nome, p2->nome);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Pessoa pessoas[MAX_PESSOAS];
    int i;

    for (i = 0; i < MAX_PESSOAS; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].nome); 
        printf("Digite o endereço da pessoa %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].endereco);
        printf("Digite o telefone da pessoa %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].telefone);
    }

    qsort(pessoas, MAX_PESSOAS, sizeof(struct Pessoa), comparar);


    printf("\nLista de Pessoas em Ordem Alfabética:\n");
    for (i = 0; i < MAX_PESSOAS; i++) {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Endereço: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n\n", pessoas[i].telefone);
    }

    return 0;
}
