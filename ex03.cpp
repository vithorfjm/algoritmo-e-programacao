/*Leia dois valores inteiros, no caso para vari�veis A e B. A seguir,
calcule a soma entre elas e atribua � vari�vel SOMA. A seguir escrever
o valor desta vari�vel.*/

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
