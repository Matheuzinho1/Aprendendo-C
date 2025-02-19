#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

struct pessoa {
    char nome[20];
    int n1;
    int n2;
    int n3;
    int res;
};

// Declaração da função 'imprimir'
void imprimir(struct pessoa p);

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    
    struct pessoa p[7];

    strcpy(p[0].nome, "Carlos");
    p[0].n1 = 3;
    p[0].n2 = 8;
    p[0].n3 = 10;
    
    strcpy(p[1].nome, "Ana");
    p[1].n1 = 5;
    p[1].n2 = 6;
    p[1].n3 = 7;
    
    strcpy(p[2].nome, "Anna");
    p[2].n1 = 10;
    p[2].n2 = 9;
    p[2].n3 = 10;    
    
    strcpy(p[3].nome, "José");
    p[3].n1 = 7;
    p[3].n2 = 8;
    p[3].n3 = 9;    
    
    strcpy(p[4].nome, "Samuel");
    p[4].n1 = 7;
    p[4].n2 = 8;
    p[4].n3 = 10;
    
    strcpy(p[5].nome, "Matheus");
    p[5].n1 = 9;
    p[5].n2 = 9;
    p[5].n3 = 9;    
    
    strcpy(p[6].nome, "Pietro");
    p[6].n1 = 8;
    p[6].n2 = 10;
    p[6].n3 = 10;

    // Chamando a função imprimir para cada pessoa
    for (int i = 0; i < 7; i++) {
        imprimir(p[i]);
    }

    return 0;
}

// Definição da função 'imprimir'
void imprimir(struct pessoa p) {
    int res = (p.n1 + p.n2 + p.n3) / 3;
    
    printf("\n-------------- Pessoa -------------------\n");
    printf("Nome: %s\n", p.nome);
    printf("Nota 1: %d\n", p.n1);
    printf("Nota 2: %d\n", p.n2);
    printf("Nota 3: %d\n", p.n3);
    printf("Resultado: %d\n", res);
    printf("------------------------------------------\n");
}

