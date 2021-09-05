#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float k, c;
	printf("Digite a temperatura em Kelvin: ");
	scanf("%f", &k);	
	
	c = k - 273.15;
	
	printf("Temperatura em Celsius: %.2f \n", c);
	
	system("pause");
	return 0;
}
