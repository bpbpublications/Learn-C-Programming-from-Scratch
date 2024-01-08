//Pointer Decrement example
#include <stdio.h>
#include <stdlib.h>
int main ()
{
int a [5] = {10, 20, 30, 40, 50};
int i=4, *p;
p = &a[4];			// Points to the last element of array
while (i>=0)
 {
printf("%d\n", *p);
   	p--;		// Moves the pointer to the next element
	i--;
 }
return (0);
} 
