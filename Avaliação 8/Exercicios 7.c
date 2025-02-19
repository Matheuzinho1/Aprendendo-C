#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int saoDivisiveis(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return (a % b == 0); 
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    if (saoDivisiveis(num1, num2)) {
        printf("%d � divis�vel por %d.\n", num1, num2);
    } else {
        printf("%d n�o � divis�vel por %d.\n", num1, num2);
    }

    return 0;
}

