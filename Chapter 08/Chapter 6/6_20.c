//Pointer difference:
#include <stdio.h>
#include <stdlib.h>
int main ()
{
int a[5] = {10, 20, 30, 40, 50};
int *p1 = &a[0];  
int *p2 = &a[3];
int pdiff = p2-p1;
printf("Address are %d Size-Units apart", pdiff);
return (0);
}
