#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

#define MAX_PRODUTOS 5

struct Produto {
    int codigo;
    char nome[15];
    float preco;
    int quantidade;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Produto produtos[MAX_PRODUTOS];
    int codigoPedido, quantidadePedido, i;

    for (i = 0; i < MAX_PRODUTOS; i++) {
        printf("Produto %d\n", i + 1);
        printf("Código: ");
        scanf("%d", &produtos[i].codigo);
        printf("Nome: ");
        scanf(" %14[^\n]", produtos[i].nome);
        printf("Preço: ");
        scanf("%f", &produtos[i].preco);
        printf("Quantidade em estoque: ");
        scanf("%d", &produtos[i].quantidade);
        printf("\n");
    }
    
    while (1) {
        printf("Digite o código do produto para pedido (0 para sair): ");
        scanf("%d", &codigoPedido);
        if (codigoPedido == 0) break;

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidadePedido);

        int encontrado = 0;
        for (i = 0; i < MAX_PRODUTOS; i++) {
            if (produtos[i].codigo == codigoPedido) {
                encontrado = 1;
                if (produtos[i].quantidade >= quantidadePedido) {
                    produtos[i].quantidade -= quantidadePedido;
                    printf("Pedido atendido! Estoque atualizado: %d unidades restantes.\n\n", produtos[i].quantidade);
                } else {
                    printf("Erro: Quantidade em estoque insuficiente.\n\n");
                }
                break;
            }
        }

        if (!encontrado) {
            printf("Erro: Código de produto não encontrado.\n\n");
        }
    }

    printf("Operação encerrada.\n");
    return 0;
}
