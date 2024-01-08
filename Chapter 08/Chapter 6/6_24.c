//	Pointer Initialization:
#include <stdio.h>
#include <stdlib.h>
int main()
{
int* p;          			// Pointer variable
int** p2p;     			// Pointer to a pointer
p = (int*)malloc(sizeof(int));
*p = 10;                       
p2p = &p;  			// pointer to pointer 
printf("value = %d", **p2p);	// use double pointer ** to access stored value
return (0);
}
