#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float c, f;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%f",&c);
	
	f = (c*9/5) + 32;
	
	
	printf("%.2f F \n", f);
	
	system("pause");

	return 0;
}
