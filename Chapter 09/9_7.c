#include <stdio.h>
#define AREA(r) (3.14 * r * r)

int main ()
{
float r, x;
printf ("Input Radius of a circle\n");
scanf ("%f", &r);
x = AREA (r);
printf ("\n Area of circle = %f", x);
return(0);
}
