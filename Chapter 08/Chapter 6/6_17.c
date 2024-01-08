//Pointer Increment and decrement:
#include <stdio.h>
#include <stdlib.h>
int main ()
{
int a [5] = {10, 20, 30, 40, 50};
int i=0, *p;
p = a;			// Points to the first element of array
while (i<5)
 {
printf("%d\n", *p);
	p++;		// Moves the pointer to the next element
i++;
 }
return (0);
} 
