#include <stdio.h>
#define PI 3.14
int main ()
{
printf ("Value of PI: %f\n", PI);
#undef PI
printf ("After undefining PI\n");
// Uncommenting the line below will result in a compilation error
// printf ("Value of PI: %f\n", PI);
return (0);
}
