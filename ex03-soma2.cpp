/*Leia dois valores inteiros, no caso para variáveis A e B. A seguir,
calcule a soma entre elas e atribua à variável SOMA. A seguir escrever
o valor desta variável.*/

#include <stdio.h>

int main(){
	int A, B, SOMA;
	printf("Digite um numero: ");
	scanf("%d", &A);
	printf("Digite outro numero: ");
	scanf("%d", &B);
	SOMA = A + B;
	printf("SOMA = %d", SOMA);
}
