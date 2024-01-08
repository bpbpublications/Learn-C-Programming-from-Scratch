#include <stdio.h>
#include<conio.h>
int main () {
   float radius, ar;
   printf ("Input Radius of Circle:");
   scanf ("%f", &radius);
   ar = 3.14 * radius * radius;
   printf ("The area of the given circle is %f", ar);
   return (0);
}
