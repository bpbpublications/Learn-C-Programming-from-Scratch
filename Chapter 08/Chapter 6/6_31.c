//Array of pointers
#include <stdio.h>
int main () 
{
int a =10, b = 20, c = 30; 
int * ptr [3]; 
ptr [0] = &a;		 		//ptr [0] stores address of a … and so on 
ptr [1] = &b; 
ptr [2] = &c; 
printf("Values of a, b and c are %d\t%d\t%d", *ptr [0], *ptr[1], *ptr[2]);
return (0);
} 
