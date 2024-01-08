#include <stdio.h>
int main () {
   double a, b, product;
   printf ("Input 2 two numbers: ");
   scanf ("%lf %lf", &a, &b);  
   product = a * b;
   printf ("Product = %.3lf", product); 
// %.2lf displays number up to 3 decimal points
   return (0);
}
