#include <stdio.h>
int main () {
int n, i, f,j, s=0, b; 
printf("Enter a Number\n"); 
scanf ("%d", &n); 
i=n; 
while (i>0) 
{  
b=i % 10; 				//get right most digit 
f=1; 	 	 			// for every number f=0 
for (j=1; j<=3; j++)
{		// find cube of the digit b 
f = f * b; 
} 
s = s + f; 
i= i /10; 
}
if(n==s)
printf("%d is an Armstrong Number", n); 
else
printf("%d is Not an Armstrong Number", n); 
return (0);
} 
