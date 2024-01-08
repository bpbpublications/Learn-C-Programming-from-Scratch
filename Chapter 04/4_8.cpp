
#include<stdio.h>
int add (int n1, int n2) {	// function to add two integers
printf ("value of n1 in sum () = %d\n", n1);    
printf ("value of n2 in sum () = %d\n", n2);
return (n1 + n2); 
} 

int n1 = 20;		// global variable declaration 
int main () { 
int n1 = 10, n2 = 20, sum; // local variable declaration in main function   
printf ("value of n1 in main () = %d\n", n1);	
sum = add (n1, n2); 
printf ("value of sum in main () = %d\n", sum); 
return (0); 	
} 


