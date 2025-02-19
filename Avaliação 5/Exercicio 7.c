#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
setlocale (LC_ALL, "portuguese");

int n, p, i;

printf("Insira o número que deseja: ");
scanf("%d", &n);

p = n/n && n/1;

if(n <= 1){
p = 0;
} 

else{	
for(i = 2; i <= n/2; i++){
if(n % i == 0){
p = 0;
}
}
}

if(p == 1){
printf("Eles são números primos", n);
}

else{
printf("Eles não são números primos ", n);
}
	
}
