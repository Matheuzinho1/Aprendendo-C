#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
setlocale(LC_ALL,"Portuguese");

int i, i2;

//PRIMEIRO QUADRADO
for (i = 0; i < 120; i++){
    printf("=");
}
//----
printf("|");
//----
for (i2 = 0; i2 < 59; i2++){
    printf(" ");
}
//----
for (i2 = 0; i2 < 59; i2++){
    printf(" ");
}
//----
printf("|\n");
//----
for (i = 0; i < 1; i++){
    printf("|");
}
//----
for (i2 = 0; i2 < 40; i2++){
    printf(" ");
}	
//----
printf("PROGRAMANDO EM C - ESTA É UMA MOLDURA");
//----
for (i2 = 0; i2 < 41; i2++){
    printf(" ");
}
//----
printf("|\n");
//----
for (i = 0; i < 1; i++){
    printf("|");
for (i2 = 0; i2 < 59; i2++){
    printf(" ");
}	
for (i2 = 0; i2 < 59; i2++){
    printf(" ");
}
printf("|\n");
}
//SEGUNDO E TERCEIRO QUADRADO
for (i = 0; i < 120; i++){
    printf("=");
}
//----
for (i = 0; i < 25; i++){
    printf("|");
for (i2 = 0; i2 < 59; i2++){
    printf(" ");
}	
    printf("|");
for (i2 = 0; i2 < 58; i2++){
    printf(" ");
}
    printf("|\n");
}
//----
for (i = 0; i < 120; i++){
    printf("=");
}
//----
getch();
}
