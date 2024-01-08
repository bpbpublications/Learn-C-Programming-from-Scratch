#include<stdio.h>

int main () {
int n1, n2, n3;     
printf("Input 3 Numbers\n"); 
scanf ("%d%d%d", &n1,&n2,&n3); 
if (n1>n2) 	//if n1 is greater than n2 control will go to nested-if 
{	
if (n1>n3) 
{	//if n1 is greater than n3, then n1 is greatest 
  		printf("n1 is greatest\n"); 
 	 }
    	else 
{	// n1<n3
 	      printf("n3 is greatest\n");
   	} 
}
else 
{			// n2>n1
if (n2>n3) 
{  	 	
		printf("n2 is greatest\n"); 
      	} 
	else 
{			// n2<n3
	 printf("n3 is greatest\n");
      } 
  } 
return (0);
} 
