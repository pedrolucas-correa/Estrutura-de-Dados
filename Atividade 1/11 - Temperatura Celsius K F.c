#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float c, k, f;
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &c);
	
	f = f = (c*9/5) + 32;
	
	printf("Temperatura em Fahrenheit: %.2f \n", f);
		
	k = (f - 32) * 5/9 + 273.15;
	 
	printf("Temperatura em Kelvin: %.2f \n", k);
	
	system("pause");
	
	return 0;
}

