#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float premio;
    premio = 780000.00;
    printf("Primeiro vencedor ganhou: %.2f \n \n", premio * 0.46);

    printf("Segundo vencedor ganhou: %.2f \n \n", premio * 0.32);

    printf("Terceiro vencedor ganhou: %.2f \n \n", premio * 0.22);
    system ("pause");
    return 0;
}