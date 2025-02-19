#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>
#include <math.h>

struct Complexo {
    float real;  
    float imag;  
};

float modulo(struct Complexo c) {
    return sqrt(c.real * c.real + c.imag * c.imag);
}

int main() {
    setlocale(LC_ALL, "Portuguese");  

    struct Complexo z, w, soma, subtracao, produto;

    printf("Digite a parte real de z: ");
    scanf("%f", &z.real);
    printf("Digite a parte imaginária de z: ");
    scanf("%f", &z.imag);

    printf("Digite a parte real de w: ");
    scanf("%f", &w.real);
    printf("Digite a parte imaginária de w: ");
    scanf("%f", &w.imag);

    soma.real = z.real + w.real;
    soma.imag = z.imag + w.imag; 

    subtracao.real = z.real - w.real;  
    subtracao.imag = z.imag - w.imag; 

    produto.real = (z.real * w.real) - (z.imag * w.imag); 
    produto.imag = (z.real * w.imag) + (z.imag * w.real);  

    printf("\nResultados:\n");
    printf("Soma: %.2f + %.2fi\n", soma.real, soma.imag);
    printf("Subtração: %.2f + %.2fi\n", subtracao.real, subtracao.imag);
    printf("Produto: %.2f + %.2fi\n", produto.real, produto.imag);
    printf("Módulo de z: %.2f\n", modulo(z));
    printf("Módulo de w: %.2f\n", modulo(w));

    return 0;
}
