#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numA[100];

int main(void) { 
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

	int i = 0, j, ver, numT;

	do{
		numA[i] = rand() % 200;
		ver = 0;
		for(j = 0; j < i; j++){
			if(numA[j] == numA[i]) 
				ver = 1; 
		}
		if(ver == 0)
			i++;
	}while(i < 100);

    for (i = 0; i < 100 - 1; i++) {
        for (j = 0; j < 100; j++) {
            if (numA[j] < numA[j + 1]) {
                numT = numA[j];
                numA[j] = numA[j + 1];
                numA[j + 1] = numT;
            }
        }
    }

    printf("\nVetor ordenado em ordem decrecente:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", numA[i]);
    }

    getchar();
}