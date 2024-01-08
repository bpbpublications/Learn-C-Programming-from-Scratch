#include <stdio.h>
#include <stdlib.h>
int main () { 
int i, n; 
printf("Input No.\n");
scanf ("%d", &n);
for (i=2; i<=n/2; i++)
{ 
//if n is perfectly divisible by any no. between 2 and n/2, it cannot be prime 
if (n%i ==0)
{   
printf("The given number is composite"); 
exit (0); 
} 
} 
printf("The given number is Prime"); 
//control reaches this point only when the number is prime.
return (0);
} 

