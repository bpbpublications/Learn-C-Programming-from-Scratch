#include <stdio.h>  
int main () { 
int i, j; 	
for (i=1; i<=5; i++)	// 5 rows
{				 
for (j=1; j<=i; j++) 
{			//No. of columns in each row= i 
printf("*\t"); 	 	 	 
	} 	 	 	 	 
printf("\n"); 
}		//line is changed to print stars on different lines
return (0);
} 
