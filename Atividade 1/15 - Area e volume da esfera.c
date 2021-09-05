#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float pi, raio, volume, area;
	pi = 3.14;
	
	printf("Informe o raio da esfera: ");
	scanf("%f", &raio);
	
	area = 4*pi*pow(raio,2);
	
	printf("Area da esfera: %.2f metros quadrados\n", area);
	
	volume = (4*pi*pow(raio,3)/3);
	
	printf("Volume da esfera: %.2f metros cubicos \n", volume);
	 	
	system("pause");
	return 0;
}
