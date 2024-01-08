#include <stdio.h>
int main () {
float n1, n2, n3, avg;
printf ("Input 3 numbers\n");
scanf ("%f%f%f", &n1, &n2, &n3);
avg = (n1 + n2 + n3) / 3;
printf ("The average of the given numbers is %f", avg);
return (0);
}
