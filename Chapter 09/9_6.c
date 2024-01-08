#include <stdio.h>  
#include <stdlib.h>  
#define AVG(n1, n2)  (n1+n2)/2
int main()
{
float a, b, av;
printf ("Input 2 Numbers\n");
scanf ("%f%f", &a, &b);
av=AVG (a, b);		// calling Macro AVG
printf ("Average of the numbers = %f\n", av);
return (0);
}
