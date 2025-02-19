#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numA[100];

int main(void) { 
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

	int i = 0, j, ver;

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

	for(i = 0; i < 100; i++){
		printf("%d\t", numA[i]);
	}

	getchar();
}