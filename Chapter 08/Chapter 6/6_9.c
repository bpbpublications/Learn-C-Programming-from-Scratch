//Modifying a variable called function:
#include <stdio.h>
#include <stdlib.h>

void inc (int *x) 
{ 
	(*x) ++;     		// value at x being incremented	 	 	 
} 
int main () {
int a = 10;
printf("Before calling inc function, a = %d\n", a); 
inc (&a); 	 	 	 	//passing address of a and b variables 
printf("After calling inc function, a = %d\n", a); 
return (0);
}
