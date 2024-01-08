#include<stdio.h>
int main () { 
int n; 
printf("Input a Number\n"); 
scanf ("%d", &n); 
if (n%5 == 0) 	// % operator returns remainder
{	
printf("Given number is a multiple of 5"); 
} 
else 
{ 
printf("Given number is not a multiple of 5"); 
} 
return (0);
} 
