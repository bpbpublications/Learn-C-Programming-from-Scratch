#include<stdio.h>
void add (int x, int y) {	// x and y are formal parameters
printf ("sum = %d", x+ y);	//after printing sum, control would go 
} 						//back to main 

int main () { 
int a = 10, b = 20;
printf ("Hello from main\n"); 
add (a, b); 	// add function called with 2 arguments (Actual parameters) 
printf ("\nBack in main\n"); 
return (0);
}