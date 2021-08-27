#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	int op, num1, num2;
	
	printf("Digite os numeros: ");
	scanf("%d %d", &num1, &num2);
	
	op = num1 + num2 ;
	printf("Soma dos numeros: %d \n", op);
	
	op = num1 - num2 ;
	printf("Subtracao dos numeros: %d \n", op);
	
	op = num1 * num2 ;
	printf("Multiplicacao dos numeros: %d \n", op);
	
	op = num1 / num2 ;
	printf("Divisao dos numeros: %d \n", op);
	
	system("pause");
	return 0;
}
