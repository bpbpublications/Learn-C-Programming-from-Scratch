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

void del (int a [], int n, int p)
{
int i;
for (i = p; i < n-1; i++)
 {
    a[i]=a[i+1]; 	// shift elements to the left 
 }
}
 
int main () { 
int a [20], i, e, p, n;
printf ("How many elements to store\n");
scanf ("%d", &n);
getarr (a, n);
printarr (a, n); 
printf ("\nInput index at which element is to be deleted\n");
scanf ("%d", &p);
del(a, n, p);
printarr (a, n-1);	
return (0);
}



