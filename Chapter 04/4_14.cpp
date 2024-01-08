#include <stdio.h>
int n = 30; 	 	//limit of Fibonacci series
void fib (int a, int b)
{ 
int c = a+ b; 
if (c < n)
{ 
printf ("%d\t", c); 
fib (b, c);
}
else 
{
return; 
} 
} 
int main () {
int a, b;
printf ("Input two initial values\n");
scanf("%d%d", &a, &b);
printf("%d\t%d\t", a, b); 
fib(a, b);
 } 

