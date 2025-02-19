#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[100];
    int numero_m;
    char curso[75];
} Aluno;

void imprimir(Aluno a[5]);

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int i;
    Aluno a[5];
    
    for (i = 0; i < 5; i++) {
        printf("Insira o nome do aluno %d: ", i + 1);
        scanf(" %99[^\n]", a[i].nome);  
        printf("Insira o RM do aluno %d: ", i + 1);
        scanf("%d", &a[i].numero_m);  
        printf("Insira o curso do aluno %d: ", i + 1);
        scanf(" %74[^\n]", a[i].curso);  
    }
    
    imprimir(a); 

    return 0;
}

void imprimir(Aluno a[5]) {
    printf("\n--- Lista de Alunos ---\n");
    
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("Aluno: %s\n", a[i].nome);
        printf("RM: %d\n", a[i].numero_m);
        printf("Curso: %s\n", a[i].curso);
        printf("-----------------------\n");
    }
}

