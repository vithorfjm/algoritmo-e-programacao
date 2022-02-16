/* A fórmula para calcular a área de uma circunferência é: area = pi . raio2.
Considerando para este problema que pi = 3.14159:
- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por pi. */

#include <stdio.h>
#include <math.h>

#define PI 3.14159 // Definir constante - sempre declarada com letra maiuscula

int main(){
	double raio;
	printf("Digite o raio: ");
	scanf("%lf", &raio);
	printf("A = %.4lf", pow(raio, 2) * PI);
}
