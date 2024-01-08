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

void ins (int a [], int n, int e, int p) {
int i;
for (i = n; i >p; i--)
 { 
    a[i]=a[i-1];	// Make room for element to be inserted 
 }
a[i] = e; 			// store the desired element
}
int main () { 
int a [20], i, e, p, n;
printf ("How many elements to store\n");
scanf ("%d", &n);
getarr (a, n);
printarr (a, n); 
printf ("\nInput element to be inserted\n");
scanf ("%d", &e);
printf ("\nInput index at which element is to be inserted\n");
scanf ("%d", &p);
ins (a, n, e, p);
printarr (a, n+1);	
return (0);
} 


