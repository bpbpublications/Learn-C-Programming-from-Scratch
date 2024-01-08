#include<stdio.h>
int main () { 
int num, rem, s=0; 
printf("Input a number\n"); 	
scanf ("%d", &num); 
while (num>0)
{ 
rem = num % 10; 
printf("%d", rem); 
// for num = 123, 3 will be printed, then 2 and finally 1 
num = num / 10; 	 // the number should be reduced to 12 
s = s + rem;	 	//if you want to print sum of digits 
} 
printf("Sum of digits = %d", s);
return (0);
} 
