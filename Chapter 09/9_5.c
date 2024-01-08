#define PI 3.14
#include <stdio.h>  
#include <stdlib.h>  
int main ()
{
float a, r;
printf ("Input Radius of a circle\n");
scanf ("%f", &r);
a=PI * r * r;		// πr2
printf ("Area of the circle= %f\n", a);
printf ("Circumference of the circle= %f\n", 2*PI*r);
return (0);
}
