#include <stdio.h>
int sum (int n);
int main () 
{
int n, result;
printf ("Input a positive integer: ");
scanf ("%d", &n);
result = sum(n);
printf ("sum = %d", result);
return (0);
}
int sum (int n) {
if (n != 0)
{
   return (n + sum(n-1)); 
}
else
{
   return(n);
}
}
