#include <stdio.h>
int main () {
int n, i, f, j, s=0; 
printf("Input limit\n"); 
scanf ("%d", &n); 
for (i=1; i<=n; i++) 
{				//Generates numbers from 1 to n 
f=1; 	 	 	 	// initialize f to 1  
for (j=i; j>1; j--)
{ 
f = f * j; 
} 
// use printf function if you wish to print factorial ‘f’ of every number 
s = s + f; 
} 
printf("Sum of series = %d", s); 
return (0);
} 
