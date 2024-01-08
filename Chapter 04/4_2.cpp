
#include<stdio.h>
void add () {	//User-defined function - add 
int a = 10, b = 20; 
 printf ("sum = %d", a+ b); 
//after printing sum control would go back to main() 
}	
// Execution of a C Program starts with main function
int main () { 
printf ("Hello from main\n");
add (); 	// here we send control to add function
// we will resume from here when control returns from add function 
printf ("\nBack in main\n");
return (0);
} 

