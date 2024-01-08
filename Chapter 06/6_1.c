#include <stdio.h>
#include <stdlib.h>
int main () 
{
int a = 10;
int *p;						// pointer variable declaration    
p = &a;						// store address of a in pointer
printf("Address of a = %x\n", &a);		//address stored in pointer variable
printf("Address stored at p = %x\n", p);
printf("Value of a = %d\n", *p); 	 	// access the value using pointer 
return (0);
}
