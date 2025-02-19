#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

struct pessoa {
    char nome[20];
    int idade;
    char endereco[180];
    char cidade[20];
    char uf[3];  // Ajuste para 3 caracteres para incluir o caractere nulo '\0'
};

void imprimir(struct pessoa p);
void limparPessoa(struct pessoa *p, int tamanho);

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    
    struct pessoa p[20];
    limparPessoa(p, 20);
    int i;
    
    // Preenchendo algumas pessoas para teste
    strcpy(p[0].nome, "Juliano");
    p[0].idade = 38;
    strcpy(p[0].endereco, "Rua 5 de novembro nº 2034, Bairro São Vicente");
    strcpy(p[0].cidade, "Barra Mansa");
    strcpy(p[0].uf, "SP");
    
    strcpy(p[1].nome, "Rute");
    p[1].idade = 40;
    strcpy(p[1].endereco, "Rua 15 de novembro nº 103, Bairro Vila das Flores");
    strcpy(p[1].cidade, "Irati");
    strcpy(p[1].uf, "PR");
    
    // Imprimindo as informações das pessoas
    for (i = 0; i < 20; i++) {
        imprimir(p[i]);
    }

    return 0;
}

void limparPessoa(struct pessoa *p, int tamanho) {
    for (i = 0; i < tamanho; i++) {
        strcpy(p[i].nome, "");
        p[i].idade = 0;
        strcpy(p[i].endereco, "");
        strcpy(p[i].cidade, "");
        strcpy(p[i].uf, "");
    }
}

void imprimir(struct pessoa p) {
    printf("\n-------------- Pessoa -------------------\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d anos\n", p.idade);
    printf("Endereço: %s\n", p.endereco);
    printf("Cidade: %s\n", p.cidade);
    printf("UF: %s\n", p.uf);
    printf("------------------------------------------\n");
}

