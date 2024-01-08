#include<stdio.h>
int add (int x, int y) {
return (x+ y);
//We are returning ‘sum’ of 2 int’s which in turn would be an int 
} 
 
int main () { 
int a = 10, b = 20, s;
printf ("Hello from main\n"); 
s = add (a, b); // add () called with 2 arguments, returned value would be stored in s 
printf ("\nReturned value or sum = %d", s); 
return (0); 	 
} 
