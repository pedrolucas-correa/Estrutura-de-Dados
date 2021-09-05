#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float k, f;
	printf("Digite a temperatura em Kelvin: ");
	scanf("%f", &k);	
	
	f = (k - 273.15) * 9/5 + 32;
		
	printf("Temperatura em Fahrenheit: %.2f \n", f);
	
	system("pause");
	return 0;
}
