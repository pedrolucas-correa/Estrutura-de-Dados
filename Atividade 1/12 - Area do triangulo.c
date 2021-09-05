#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float a, b, h;
	
	printf("Digite a medida da base e altura do triangulo, respectivamente : \n");
	scanf("%f %f", &b, &h);
	
	a = (b * h) / 2;
	
	printf("Area do triangulo: %.2f metros quadrados \n", a);
	
	system("pause");
	return 0;
}
