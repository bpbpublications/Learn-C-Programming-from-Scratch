//Malloc Exampe
#include <stdio.h>
#include <stdlib.h>
int main () {
int *p; 
p = malloc (2);	//would allocate 2 bytes since p is an int-pointer 
*p = 10; 
printf("value stored = %d", *p);
return (0);
} 

