#include <stdio.h>
int main () {

    int a , b , c; 
    double y;
    printf("Значення числа a = ");
    scanf("%d", &a);

    printf("Введіть число b = ");
    scanf("%d", &b);

    printf("Введіть число c = ");
    scanf("%d", &c);

y = (double) 4 - ((3 * (a + b + c)) / 2 - c) - (1 / b);

printf("y = %f ", y );

return 0;
}