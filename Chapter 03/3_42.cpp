#include <stdio.h>
int main () { 
int n, i, j, c, s=0; 
printf("Input limit\n"); 
scanf ("%d", &n); 
for (i=1; i<=n; i++) 
{	 			//Generates numbers from 1 to n 
c=1; 
for (j=1; j<=i; j++)
{ 
c = c * i; 
} 
s = s + c; 
} 
printf("Sum of series = %d", s); 
return (0); 	
} 
