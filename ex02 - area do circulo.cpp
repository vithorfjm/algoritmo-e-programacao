/* A fórmula para calcular a área de uma circunferência é: area = pi . raio2.
Considerando para este problema que pi = 3.14159:
- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por pi. */

#include <stdio.h>
#include <math.h>

int main(){
	double area, raio;
	printf("Digite o raio: ");
	scanf("%lf", &raio);
	area = 3.14159 * pow(raio, 2);
	printf("A = %.4lf", area);
}
