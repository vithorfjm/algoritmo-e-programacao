/*Leia 2 valores de ponto flutuante de dupla precisao A e B,
que correspondem a 2 notas de um aluno. A seguir,
calcule a media do aluno, sabendo que a nota A tem peso 3.5
e a nota B tem peso 7.5 (A soma dos pesos portanto e 11).
Assuma que cada nota pode ir de 0 ate 10.0, sempre com uma casa decimal.*/

#include <stdio.h>

int main(){
	double a, b, media;
	printf("Primeira nota: ");
	scanf("%lf", &a);
	printf("Segunda nota: ");
	scanf("%lf", &b);
	media = (a*3.5 + b*7.5) / 11;
	printf("Media = %lf", media);
}
