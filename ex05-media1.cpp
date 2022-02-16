/*Leia 2 valores de ponto flutuante de dupla precisao A e B,
que correspondem a 2 notas de um aluno. A seguir,
calcule a media do aluno, sabendo que a nota A tem peso 3.5
e a nota B tem peso 7.5 (A soma dos pesos portanto e 11).
Assuma que cada nota pode ir de 0 ate 10.0, sempre com uma casa decimal.*/

#include <stdio.h>

#define PESO1 3.5
#define PESO2 7.5
#define SOMAPESOS 11

int main(){
	double nota1, nota2, media;
	printf("Primeira nota: ");
	scanf("%lf", &nota1);
	printf("Segunda nota: ");
	scanf("%lf", &nota2);
	media = (nota1 * PESO1 + nota2 * PESO2) / SOMAPESOS;
	printf("Media = %.5lf", media);
}
