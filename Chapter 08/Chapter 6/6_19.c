//Pointer Addition and subtraction:
#include <stdio.h>
#include <stdlib.h>
int main () 
{
int a [5] = {10, 20, 30, 40, 50};
int i=0, *p;
p = &a;		
printf("%d\n", *p);		// First Element
p=p+3;					// Moves the pointer to the 4Th element
printf("%d\n", *p);

return (0);
} 
