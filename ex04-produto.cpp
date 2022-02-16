/* Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores
e atribua esta operação à variável PROD. A seguir mostre a variável PROD com
mensagem correspondente. */

#include <stdio.h>

int main(){
	int n1, n2, PROD;
	printf("Primeiro valor: ");
	scanf("%d", &n1);
	printf("Segundo valor: ");
	scanf("%d", &n2);
	PROD = n1 * n2;
	printf("PROD = %d", PROD);
}
