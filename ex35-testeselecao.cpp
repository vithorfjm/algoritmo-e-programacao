/*
Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do
que C e se D for maior do que A, e a soma de C com D for maior que a soma
de A e B e se C e D, ambos, forem positivos e se a vari�vel A for par
escrever a mensagem "Valores aceitos", sen�o escrever "Valores nao aceitos".
*/

#include <stdio.h>

int main() {
	int a, b, c, d;
	printf("Valor A: ");
	scanf("%d", &a);
	printf("Valor B: ");
	scanf("%d", &b);
	printf("Valor C: ");
	scanf("%d", &c);
	printf("Valor D: ");
	scanf("%d", &d);
	if (b > c and d > a and c+d > a+b and c > 0 and d > 0 and a%2 == 0)
		printf("Valores aceitos");
		else printf("Valores nao aceitos");
}
