//Swap 2 variables using pointers:
#include <stdio.h>
#include <stdlib.h>
void swap (int * x, int * y)
{ 
// Declare x & y as pointer cells (we are receiving addresses of a and b)
int temp; 
temp = *x;			// save the value at address x to temp 
*x = *y;				// put value at y into x 
*y = temp;			// put temp into y 
} 
int main () 
{
int a = 100, b = 200;
printf("Before swapping, value of a: %d\n", a); 
printf("Before swap, value of b: %d\n", b); 
swap(&a, &b);      		//passing address of a and b variables    
printf("After swap, value of a: %d\n", a );
printf("After swap, value of b: %d\n", b );
return (0); 
}
