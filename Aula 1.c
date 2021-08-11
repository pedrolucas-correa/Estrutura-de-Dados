int main(){
    int x = 0;
    printf("x = %i \n", x);

    int z = x;
    z = 1;
    printf("x = %i \n", x)

    int *y = &x;
    *y = 2;
    printf("x = %i \n", x);

    int *w = y;
    *w = 3;
    printf("x = %i \n", x);
}
