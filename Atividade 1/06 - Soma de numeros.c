#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float soma, num1, num2;
	printf("Digite os numeros: ");
	scanf("%f %f", &num1, &num2);
	
	soma = num1 + num2 ;
	
	printf("Soma dos numeros: %.1f \n", soma);
	
	
	system("pause");
	return 0;
}
