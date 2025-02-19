#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[100];
    int matricula;
    float mediaFinal;
} Aluno;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    Aluno alunos[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf(" %99[^\n]", alunos[i].nome);
        printf("Matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        printf("Média final do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].mediaFinal);
    }

    printf("\n--- Alunos Aprovados ---\n");
    for (i = 0; i < 10; i++) {
        if (alunos[i].mediaFinal >= 5.0) {
            printf("Nome: %s, Matrícula: %d, Média Final: %.2f\n", 
                   alunos[i].nome, alunos[i].matricula, alunos[i].mediaFinal);
        }
    }

    printf("\n--- Alunos Reprovados ---\n");
    for (i = 0; i < 10; i++) {
        if (alunos[i].mediaFinal < 5.0) {
            printf("Nome: %s, Matrícula: %d, Média Final: %.2f\n", 
                   alunos[i].nome, alunos[i].matricula, alunos[i].mediaFinal);
        }
    }

    return 0;
}

