#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	int numero;
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	numero = numero * numero;
	
	printf("Quadrado do numero digitado: %d \n", numero);
	
	
	system("pause");
	return 0;
}
