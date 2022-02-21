#include <stdio.h>

int main(){
	char letra; //char
	char palavra[50]; //string - [] -> quantidade maxima de caracteres da palavra
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	fflush(stdin); //limpar buffer (apenas char e string)
	printf("Digite uma palavra: ");
	//scanf("%s", &palavra); // nao permite colocar espaços
	fflush(stdin);
	fgets(palavra, 50, stdin); // permite colocar espaço (variavel, limiteDeLetras, stdin)
	
	printf("Letra: %c\n", letra);
	printf("Palavra: %s", palavra);
	
	
	switch(letra){ // só funciona com char
		case 'S': printf("Digitou S"); break;
		case 'N': printf("Digitou N"); break;
		case 'F': printf("Digitou F"); break;
		default: printf("Letra invalida");
	}
	
	
	
}
