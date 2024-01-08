#include <stdio.h>
int main () { 
int i, s=0; 
for (i=1; i<=10; i++)
{
printf("%d\t", i); 
	s = s+ i;  	 	 	 
} 
printf("\nsum of series = %d", s); 
return (0); 
} 
