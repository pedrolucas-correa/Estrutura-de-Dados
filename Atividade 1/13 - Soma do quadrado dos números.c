#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	float x, y, z, total;
	printf("Digite os numeros: ");
	scanf("%f %f %f", &x, &y, &z);
	
	total = pow(x,2) + pow(y,2) + pow(z,2);
	
	printf("Resultado: %.1f \n", total);
	
	
	system("pause");
	return 0;
}
