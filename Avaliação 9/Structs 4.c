#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[100];
    int numero_m;
    char curso[75];
    int n1;
    int n2;
    int n3;
} Aluno;

void calc_maior(Aluno a[5]) {
    int maior = a[0].n1;
    int indice_maior = 0;
	int i;
	
    for (i = 1; i < 5; i++) {
        if (a[i].n1 > maior) { 
            maior = a[i].n1;
            indice_maior = i;
        }
    }
    printf("Aluno com a maior nota n1: %s (Nota: %d)\n", a[indice_maior].nome, maior);
}

void calc_menor(Aluno a[5]) {
    int menor = a[0].n1; 
    int indice_menor = 0;
		int i; 

    for (i = 1; i < 5; i++) {
        if (a[i].n1 < menor) { 
            menor = a[i].n1; 
            indice_menor = i; 
        }
    }
    printf("Aluno com a menor nota n1: %s (Nota: %d)\n", a[indice_menor].nome, menor);
}

void calc_media_maior(Aluno a[5]) {
    float res[5];
    float maior_media = 0;
    int indice_maior_media = 0;
    int i;

    for (i = 0; i < 5; i++) {
        res[i] = (a[i].n1 + a[i].n2 + a[i].n3) / 3.0;	
        if (res[i] > maior_media) {
            maior_media = res[i];
            indice_maior_media = i; 
        }
    }
    printf("Aluno com a maior média: %s (Média: %.2f)\n", a[indice_maior_media].nome, maior_media);
}

void calc_media_menor(Aluno a[5]) {
    float res[5];
    float menor_media = 100.0;  
    int indice_menor_media = 0;
    int i;

    for (i = 0; i < 5; i++) {
        res[i] = (a[i].n1 + a[i].n2 + a[i].n3) / 3.0;	
        if (res[i] < menor_media) {
            menor_media = res[i];
            indice_menor_media = i; 
        }
    }
    printf("Aluno com a menor média: %s (Média: %.2f)\n", a[indice_menor_media].nome, menor_media);
}

void imprimir(Aluno a[5]) {
    printf("\n--- Lista de Alunos ---\n");
    int i;
    for (i = 0; i < 5; i++) {
        printf("Nome: %s, RM: %d, Curso: %s, Nota 1: %d, Nota 2: %d, Nota 3: %d\n", 
               a[i].nome, a[i].numero_m, a[i].curso, a[i].n1, a[i].n2, a[i].n3);
    }
}

void aprovado(Aluno a[5]) {
	int i;
	int res[5];
	
	 for (i = 0; i < 5; i++) {
        res[i] = (a[i].n1 + a[i].n2 + a[i].n3) / 3.0;	
        if (res[i] > 6) {
        	printf("O aluno %s foi aprovado\n", a[i].nome);
        } else {
			printf("O aluno %s foi reprovado\n", a[i].nome);
		}
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    Aluno a[5];
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("Insira o nome do aluno %d: ", i + 1);
        scanf(" %99[^\n]", a[i].nome);  
        printf("Insira o RM do aluno %d: ", i + 1);
        scanf("%d", &a[i].numero_m);  
        printf("Insira o curso do aluno %d: ", i + 1);
        scanf(" %74[^\n]", a[i].curso);  
        printf("Insira a nota 1 do aluno %d: ", i + 1);
        scanf("%d", &a[i].n1);  
        printf("Insira a nota 2 do aluno %d: ", i + 1);
        scanf("%d", &a[i].n2);  
        printf("Insira a nota 3 do aluno %d: ", i + 1);
        scanf("%d", &a[i].n3);  
    }

    imprimir(a);
    calc_maior(a);
    calc_menor(a);
    calc_media_maior(a);
    calc_media_menor(a);
    aprovado(a);

    return 0;	
}

