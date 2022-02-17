#include <stdio.h>

int main(){
	double nota1, nota2, media;
	printf("Primeira nota: ");
	scanf("%lf", &nota1);
	printf("Segunda nota: ");
	scanf("%lf", &nota2);
	media = (nota1 + nota2) / 2;
	if (media >= 9.5) {
		printf("Media: %.1lf\n", media);
		printf("Parabens! Aprovado!");
		}
		else
		{
		printf("Media: %.1lf\n", media);
		printf("Tente novamente! Reprovado!");	
		}
		
}
