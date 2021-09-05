#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float k, f;
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &f);	
	
	k = (f - 32) * 5/9 + 273.15;
	
	printf("Temperatura em Kelvin: %.2f \n", k);
	
	system("pause");
	return 0;
}
