#include <stdio.h> // #include serve para 
// inclusão de bibliotecas no codigo escrito

// As bibliotecas são informadas entre menor e 
// maior, apos o nome normalmente Levam ".h"
// segue exemplo na linha 1 e na linha 7 e 8.
#include <stdlib.h>
#include <locale.h>
//------------------------------------------------------------
// Cometários em codigos C são textos iniciados 
// com "//" esses textos são ignorados na execução 
// do programa -> Comentário de 1 linha 
//------------------------------------------------------------
// Comentário em BLOCOS
// são comentarios de mais de uma linha de código
// são iniciados com "/*" e finalizados com  "*/"
//-------------------------------------------------------------
// Metodo principal ou Função principal em C
// o método principal é onde inicia se a execução 
// o programa. Segue abaixo seu codigo
//-------------------------------------------------------------
void main(void){ 
	setlocale(LC_ALL,"Portuguese");
//-------------------------------------------------------------
// primeiro VOID - sem retorno 
// segundo VOID - sem parâmetro 
// main -> do inglês principal	
// Chaves "{" -> abertura de
// bloco de instruções ou comandos
// Chaves "}" -> fechamento das instruções
// ou comandos.
// Sempre quando abrir deve fechar 
// em algum momento.
//-------------------------------------------------------------
	printf("Olá Mundo!");
//--------------------------------------------------------------				 
// printf -> impressão na tela do computador 
// isto é uma função da biblioteca stdio
// *Função é quando usa-se parenteses 
// Texto a ser escrito deve estar entre aspas
// dupla.
// Sempre ao final de instrução ou comando 
// usamos ";"
}
