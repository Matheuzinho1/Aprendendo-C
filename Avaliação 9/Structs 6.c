#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_ALUNOS 10

struct Aluno {
    int matricula;
    char nome[50];
    int codigoDisciplina;
    float nota1;
    float nota2;
};

float calcularMedia(float nota1, float nota2) {
    return (nota1 * 1.0 + nota2 * 2.0) / 3.0;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Aluno alunos[MAX_ALUNOS];
    int numAlunos;

    printf("Digite o número de alunos (até %d): ", MAX_ALUNOS);
    scanf("%d", &numAlunos);

    if (numAlunos > MAX_ALUNOS) {
        numAlunos = MAX_ALUNOS;
    }

    int i;
    for (i = 0; i < numAlunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf(" %[^\n]s", alunos[i].nome);
        printf("Código da Disciplina: ");
        scanf("%d", &alunos[i].codigoDisciplina);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
    }

    printf("\nListagem final dos alunos:\n");
    printf("| Matrícula | Nome                      | Média  |\n");
    printf("\n");

    for (i = 0; i < numAlunos; i++) {
        float media = calcularMedia(alunos[i].nota1, alunos[i].nota2);
        printf("| %9d | %-24s | %.2f  |\n", alunos[i].matricula, alunos[i].nome, media);
    }

    printf("\n");

    return 0;
}
