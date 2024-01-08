#include <stdio.h>
#include <conio.h>
int main () { 
int a, b;  
	 
Repeat: 	 	//Label Repeat 
printf("Enter 2 Nos to add \n");  	
scanf ("%d%d", &a, &b); 
printf("sum = %d", a + b); 
printf("\nPress y to add 2 more numbers\n"); 
if (getche()=='y') 
goto Repeat; 
		return(0);
} 
