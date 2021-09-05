#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Programa para calculo de 3 numeros inteiros
int main()
{
    int x, y, z, resultado;
    printf("Digite tres numeros inteiros: \n");
    scanf("%d %d %d", &x, &y, &z);

    resultado = x * y * z;

    printf("O produto eh: %d \n", resultado);
    system("pause");
    return 0;
}