#include <stdio.h>

int main () {

int x, y;
    printf("Введіть число x");
    scanf("%d" , &x);
    printf("Введіть число y");
    scanf("%d" , &y);
int product = x*y;
int sum = x*2 + y*2;
double ser = (double) (x + y) / 2;
printf ("\nДобуток = %d\n Сумма = %d\n Середнє арифметичне = %f",product, sum , ser ) ;

return 0;

}