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

int search (int a [], int n, int key) {
int i;
for (i = 0; i < 10; i++)
 {       
if (a[i] == key) 
 {      
return (1);	//function will exit if element found with 1 (TRUE)
  } 
  }				//end of for loop 
return (0);
}

int main () {
int a [15], i, s, n, r; 
printf ("How many elements to store\n");
scanf ("%d", &n); 
getarr (a, n); 
printarr (a, n); 
printf ("\nInput element to be found\n");
scanf ("%d", &s);
r= search (a, n, s);
if (r==1)
printf ("Element found\n");
else
printf ("Element not found\n");
return (0);
} 



