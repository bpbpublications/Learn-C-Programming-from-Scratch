#include <stdio.h>
int main () { 
int n, i, f =1; 
printf("Input a No.\n");  
scanf ("%d", &n); 
for (i=n; i>1; i--)
{ 
f = f* i;
} 
printf("factorial = %d\t", f);
return (0); 
} 


