#include <stdio.h>  
int main () { 
int i, j;  	
for (i=1; i<=10; i++)
{  
for (j=1; j<=10; j++)
{ 
//when i is 1, table of 1 would be printed i*1, i*2, i*3
printf("%d\t", i*j); 	 
} 	 
printf("\n"); //change line to print next table on new line
} 		
return (0);
} 
