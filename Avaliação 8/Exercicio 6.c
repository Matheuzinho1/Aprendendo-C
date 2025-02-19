#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int alunoPassou(float F1, float F2) {
  
    if ((F1 + F2 >= 19) && (F1 > 7) && (F2 > 7)) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    float nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    if (alunoPassou(nota1, nota2)) {
        printf("O aluno passou.\n");
    } else {
        printf("O aluno não passou.\n");
    }

    return 0;
}

