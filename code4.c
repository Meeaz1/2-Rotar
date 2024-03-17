#include <stdio.h>
#include <math.h>

int main () {

int a, b, y;
double x;
printf(" a = ");
scanf ("%d", &a );

printf(" b = ");
scanf ("%d", &b );

printf(" c = ");
scanf ("%d", &y );

x = (double) sqrt ( a - pow (b,2)) + sqrt ( a * b ) + y / 2;

printf ("x = %.2f", x);

return 0;

}