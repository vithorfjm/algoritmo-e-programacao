#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, delta, x1, x2;
	printf("Digite o valor de A: ");
	scanf("%lf", &a);
	printf("Digite o valor de B: ");
	scanf("%lf", &b);
	printf("Digite o valor de C: ");
	scanf("%lf", &c);
	delta = pow(b, 2) - 4*a*c;
	printf("%lf\n", delta);
	if (delta <= 0)
		printf("Impossivel calcular");
		else {
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("X1 = %lf\n", x1);
		printf("X2 = %lf", x2);
		}
}
