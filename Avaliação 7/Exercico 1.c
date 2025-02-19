#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int num[10];

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int i = 0, neg = 0, pos = 0, par = 0, imp = 0;
    
    printf("Insira 10 numeros: ");
    for(i = 1; i < 10; i++){
        scanf("%d\n", &num[i]);
    }
    
    for(i = 0; i < 10; i++){
        if(num[i] < 0){
            neg++;
        } else {
        	pos++;
		}
    }

    for(i = 0; i < 10; i++){
        if(num[i] % 2 == 0){
            par++;
        } else {
        	imp++;
		}
    }
    
    
    
    printf("Voc� digitou %d numeros negativos\n", neg);
    printf("Voc� digitou %d numeros positivos\n", pos);
    printf("Voc� digitou %d numeros par\n", par);
    printf("Voc� digitou %d numeros impar", imp);
}

