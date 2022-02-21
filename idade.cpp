#include <stdio.h>

int main() {
	int idade;
	printf("Idade: ");
	scanf("%d", &idade);
	/*if (idade >= 0 && idade <= 10)
		printf("Crianca");
		else if (idade >= 11 && idade <= 18)
			printf("Adolescente");
			else if (idade >= 19 && idade <= 60)
				printf("Adulto");
				else if (idade >= 61 && idade <= 100)
					printf("Idoso");
					else printf("Idade invalida");*/
					
	switch(idade){
		case 0 ... 10: printf("crianca"); break;
		case 11 ... 18: printf("adolescente"); break;
		case 19 ... 60: printf("adulto"); break;
		case 61 ... 100: printf("idoso"); break;
		case 101 ... 150: printf("zumbi"); break;
		default: printf("idade invalida");
	}
}
