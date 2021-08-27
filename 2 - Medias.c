#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	float media, n1, n2, n3;
	printf("Digite as notas do aluno (N1, N2, N3): \n");
	scanf("%f  %f  %f", &n1, &n2, &n3);
	
	media = (n1 + n2 + n3)/3;

	printf("%.2f \n", media);

	system("pause");
	return 0;
}
