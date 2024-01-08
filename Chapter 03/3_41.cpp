#include <stdio.h>  
int main () {
int n, i, f; 
for (n=10; n<=100; n++) 
{	 	 	//Generates numbers from 10 – 100 
f=0; 						// for every number f=0
for (i=2; i<=n/2; i++)
{ 
		if (n%i ==0)
{ 	 	 	 
f=1; 	
//Make f=1 when n is divisible by any value of i
break; 
} 
} 
if (f==0)   
//n was never perfectly divisible i. Hence n is prime, print it. 
printf("%d\t", n); 
}  	 	 	 	 
return (0); 	
} 
