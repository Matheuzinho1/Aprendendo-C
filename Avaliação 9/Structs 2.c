#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[100];
    int idade;
    char endereco[200];
} InfoPessoa;

int main() {
    setlocale(LC_ALL, "Portuguese");

    InfoPessoa info;

    printf("Insira seu nome: ");
    scanf(" %99[^\n]", info.nome);

    printf("Insira sua idade: ");
    scanf("%d", &info.idade);

    printf("Insira seu endereço: ");
    scanf(" %199[^\n]", info.endereco);

    printf("\n--- Dados da Pessoa ---\n");
    printf("Nome: %s\n", info.nome);
    printf("Idade: %d\n", info.idade);
    printf("Endereço: %s\n", info.endereco);

    return 0;
}

