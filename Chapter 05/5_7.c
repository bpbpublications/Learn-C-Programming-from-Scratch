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

Bubblesort (int a [], int n)
{
int i, j, t;
for (i = 0; i < n; i++)
 {
   for (j = 0; j < n - i; j++)
{
  	   if (a[j] > a[j+1])
{
t = a[j]; 
a[j] = a [j + 1];			// swap a[j] with a[j+1] 
a [j + 1] = t; 
} 
	}
 } 
}    
int main () {
int a [10], n;
printf ("How many elements to store\n");
scanf ("%d", &n);
getarr (a, n);
printarr (a, n); 
Bubblesort (a, n);
printarr (a, n); 
return (0);
} 
