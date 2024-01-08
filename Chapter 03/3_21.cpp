#include <stdio.h>
int main () { 
int i=1, s=0; 
while (i<=10)
{ 
printf("%d\t", i); 
s=s+i;
i++; 
} 
printf("\nsum of series = %d", s);	
//sum is to be printed once that’s why its outside loop 
return (0); 
} 
