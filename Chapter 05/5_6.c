#include<stdio.h>
void printarr (int a [], int n) {
 int i; 
printf ("\nHere are the array elements\n");
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

Selectionsort (int a [], int n) 
{
	int i,j,t;
for (i = 0; i < n-1; i++) 
  {
    for (j = i+1; j < n; j++)
      {
 	  if (a[i] > a[j]) 
{
t = a[i];			//save value in a[i] to t
a[i] = a[j]; 			// swap a[i] with a[j] 
a[j] = t; 
} 
}
  } 
}
int main () {
int a [10], i, j, n, t;
printf ("How many elements to store\n");
scanf ("%d", &n);
getarr (a, n);
printarr (a, n); 
Selectionsort (a, n);		// calling selection sort function
printarr (a, n); 
return (0); 	 	   
} 
