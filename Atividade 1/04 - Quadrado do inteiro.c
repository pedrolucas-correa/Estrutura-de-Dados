#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	int numero;
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	numero = numero * numero;
	
	printf("Quadrado do numero digitado: %d \n", numero);
	
	
	system("pause");
	return 0;
}
