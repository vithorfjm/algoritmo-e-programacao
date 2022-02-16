/* Leia quatro valores inteiros A, B, C e D. A seguir, calcule e
mostre a diferença do produto de A e B pelo produto de C e D segundo
a fórmula: DIFERENCA = (A * B - C * D) */

#include <stdio.h>

int main(){
	int A, B, C, D, dif;
	printf("Primeiro valor: ");
	scanf("%d", &A);
	printf("Segundo valor: ");
	scanf("%d", &B);
	printf("Terceiro valor: ");
	scanf("%d", &C);
	printf("Quarto valor: ");
	scanf("%d", &D);
	dif = A * B - C * D;
	printf("DIFERENCA = %d", dif);
}
