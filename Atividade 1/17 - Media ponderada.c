#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, n2, n3, mf;
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("\n \nNota 2: ");
    scanf("%f", &n2);
    printf("\n \nNota 3: ");
    scanf("%f", &n3);

    mf = (n1+n2+(n3*2))/4 ;
    printf("Media final: %.2f \n", mf);
    system("pause");
    return 0;
}