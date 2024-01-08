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


int main () { 
int a [10], n;  	  
printf ("How many elements to store\n");
scanf ("%d", &n); 
getarr (a, n); // when passing arrays to a function we just pass the array name
return (0);
} 


