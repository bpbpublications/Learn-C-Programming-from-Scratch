#include <stdio.h>
int fct (int i) {
if (i <= 1) {
       return (1); 
   } 
   return i * fct (i - 1); 
} 
int main () {   
int n = 3, f;	// let’s say n=3 for simplicity
f = fct (n); 
printf ("Factorial of %d is %d\n", n, f); 
return (0); 
} 

