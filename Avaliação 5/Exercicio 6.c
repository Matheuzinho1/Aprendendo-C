#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
    setlocale(LC_ALL, "Portuguese");

    int limite, i, primo;
    printf("Digite um n�mero: ");
    scanf("%d", &limite);

    printf("N�meros primos at� %d:\n", limite);
    for (i = 2; i <= limite; i++) {
        primo = 1;

        int p = 2;

        while (p < i && primo) {
            primo = (i % p); 
            p++;
        }
        (primo) && printf("%d ", i); 
    }
    getch();
}
