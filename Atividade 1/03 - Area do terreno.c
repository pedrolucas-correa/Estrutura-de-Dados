#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float a, b, h;
	
	printf("Digite as dimensoes do terreno em metros: \n");
	scanf("%f %f", &b, &h);
	
	a = b * h;
	
	printf("Area do terreno: %.2f metros quadrados \n", a);
	
	system("pause");
	return 0;
}
