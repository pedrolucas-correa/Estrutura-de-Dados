#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float salario;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);

	salario = salario + (salario * 0.213);
	printf("Seu novo salario: %.2f \n", salario);
	
	system("pause");
	return 0;
}
