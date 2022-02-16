/*Leia 2 valores inteiros e armazene-os nas variáveis
A e B. Efetue a soma de A e B atribuindo o seu resultado
na variável X.*/

#include <stdio.h>

int main(){
	int A, B, X; //armazena espaço na memória
	printf("Primeiro numero: "); //solicita ao usuário o primeiro número da soma
	scanf("%d", &A); //aloca o primeiro número na memória
	printf("Segundo numero: "); //solicita ao usuário o segundo número da soma
	scanf("%d", &B); //aloca o segundo número na memória
	X = A + B; // X recebe o resultado de A + B
	printf("X = %d", X); //Mostra o valor de X
}
