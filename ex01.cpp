/*Leia 2 valores inteiros e armazene-os nas vari�veis
A e B. Efetue a soma de A e B atribuindo o seu resultado
na vari�vel X.*/

#include <stdio.h>

int main(){
	int A, B, X; //armazena espa�o na mem�ria
	printf("Primeiro numero: "); //solicita ao usu�rio o primeiro n�mero da soma
	scanf("%d", &A); //aloca o primeiro n�mero na mem�ria
	printf("Segundo numero: "); //solicita ao usu�rio o segundo n�mero da soma
	scanf("%d", &B); //aloca o segundo n�mero na mem�ria
	X = A + B; // X recebe o resultado de A + B
	printf("X = %d", X); //Mostra o valor de X
}
