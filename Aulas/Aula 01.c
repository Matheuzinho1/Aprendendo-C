#include <stdio.h> // #include serve para 
// inclus�o de bibliotecas no codigo escrito

// As bibliotecas s�o informadas entre menor e 
// maior, apos o nome normalmente Levam ".h"
// segue exemplo na linha 1 e na linha 7 e 8.
#include <stdlib.h>
#include <locale.h>
//------------------------------------------------------------
// Comet�rios em codigos C s�o textos iniciados 
// com "//" esses textos s�o ignorados na execu��o 
// do programa -> Coment�rio de 1 linha 
//------------------------------------------------------------
// Coment�rio em BLOCOS
// s�o comentarios de mais de uma linha de c�digo
// s�o iniciados com "/*" e finalizados com  "*/"
//-------------------------------------------------------------
// Metodo principal ou Fun��o principal em C
// o m�todo principal � onde inicia se a execu��o 
// o programa. Segue abaixo seu codigo
//-------------------------------------------------------------
void main(void){ 
	setlocale(LC_ALL,"Portuguese");
//-------------------------------------------------------------
// primeiro VOID - sem retorno 
// segundo VOID - sem par�metro 
// main -> do ingl�s principal	
// Chaves "{" -> abertura de
// bloco de instru��es ou comandos
// Chaves "}" -> fechamento das instru��es
// ou comandos.
// Sempre quando abrir deve fechar 
// em algum momento.
//-------------------------------------------------------------
	printf("Ol� Mundo!");
//--------------------------------------------------------------				 
// printf -> impress�o na tela do computador 
// isto � uma fun��o da biblioteca stdio
// *Fun��o � quando usa-se parenteses 
// Texto a ser escrito deve estar entre aspas
// dupla.
// Sempre ao final de instru��o ou comando 
// usamos ";"
}
