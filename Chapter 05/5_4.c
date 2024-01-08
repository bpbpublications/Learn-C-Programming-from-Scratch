#include<stdio.h>
void printarr (int a [], int n) {
 int i; 
printf ("Here are the array elements\n");
for (i = 0; i < n; i++) 
   {
    printf ("%d\t", a[i]); 
   } 
} 
void getarr (int a [], int n) {			//Function to input array elements
int i; 
printf ("Input array elements\n");
for (i = 0; i < n; i++)
   {
      scanf ("%d", & a [i]); 
   } 
} 

int greatest (int a [], int n)
{
int i, g;
g=a [0]; 		// assume a [0] is the greatest element and find if there is a greater 
for (i = 1; i < n; i++)
 {		//element then it through the array
if (a[i] > g)
  {
		g = a[i]; 	 	 	 
  	  } 
}
	return(g);
}

int main () { 
int a [10], n,max;
printf ("How many elements to store\n");
scanf ("%d", &n);
getarr (a, n); 	 
printarr (a, n);
max=greatest(a, n);
printf ("\nGreatest element is %d", max); 
return (0); 	
} 



