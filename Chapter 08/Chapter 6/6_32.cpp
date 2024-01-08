//Array of pointers - example 2
#include <stdio.h>
int main () 	{ 
int a [5], i, *p[5]; 
printf("Input 5 elements\n"); 
for (i =0; i<5; i++) 	 	{ 
scanf("%d", &a[i]); 
p[i] = & a[i]; 
} 
printf("\n You entered the elements\n"); 
for (i =0; i<5; i++) 	 	//print array elements using pointer array 
printf("%d\n", *p[i]); 
return (0);
} 
