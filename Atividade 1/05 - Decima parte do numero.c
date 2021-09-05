#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float num;
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	num = num / 10 ;
	
	printf("Decima parte do numero digitado: %.2f \n", num);
	
	
	system("pause");
	return 0;
}
