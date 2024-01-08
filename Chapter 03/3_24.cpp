#include <stdio.h>
int main () {
int n, fct =1; 
printf("Input a number\n");
scanf ("%d", &n); 
while (n>1)
{ 
fct = fct * n; 	 	 
n--;
 } 
printf("Factorial = %d\t", fct); 
return (0); 
} 
