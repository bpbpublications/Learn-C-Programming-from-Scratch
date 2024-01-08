//Array access:
#include <stdio.h>
#include <stdlib.h>

int main () {
int a [5] = {10, 20, 30, 40, 50};
int *p;
p = a;				// Points to the first element of array
printf("First element of Array = %d\n", *p);	// Prints 10
return (0);
} 
