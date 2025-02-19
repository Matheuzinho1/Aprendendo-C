#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

#define MAX_LIVROS 5
#define MAX_TITULO 30
#define MAX_AUTOR 15

struct Livro {
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int ano;
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    struct Livro livros[MAX_LIVROS];
    char tituloBusca[MAX_TITULO];
    int i, encontrado = 0;

    for (i = 0; i < MAX_LIVROS; i++) {
        printf("Digite o título do livro %d: ", i + 1);
        scanf(" %[^\n]%*c", livros[i].titulo);  
        printf("Digite o autor do livro %d: ", i + 1);
        scanf(" %[^\n]%*c", livros[i].autor);  
        printf("Digite o ano do livro %d: ", i + 1);
        scanf("%d", &livros[i].ano);
    }

    printf("\nDigite o título do livro que deseja buscar: ");
    scanf(" %[^\n]%*c", tituloBusca);

    for (i = 0; i < MAX_LIVROS; i++) {
        if (strcmp(livros[i].titulo, tituloBusca) == 0) {
            printf("\nLivro encontrado: %s\nAutor: %s\nAno: %d\n", livros[i].titulo, livros[i].autor, livros[i].ano);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("\nNenhum livro encontrado com o título '%s'.\n", tituloBusca);
    }

    return 0;
}

