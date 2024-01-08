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


void merge (int a1 [], int a2 [], int a3 [], int m, int n)
{
int i, j, k;
i =j = k = 0;
while (i<m && j<n) 
 {		//while there are elements in both the arrays 
if (a1[i] < a2[j]) 
 		a3[k++] = a1[i++]; 
else 
		a3[k++] = a2[j++]; 	 
 }	// loop will end once elements of either array are exhausted.  
while (i<m) 
 {	//if a1 has elements remaining, add them to a3
  a3[k++] = a1[i++]; 
 } 
while (j<n)
 {   		//if a2 has elements remaining, add them to a3 
  a3[k++] = a2[j++];
 } 
}
int main () {
int a1[10], a2[10], a3[20], n, m;
printf ("How many elements to store in a1\n");
scanf ("%d", &m);
getarr (a1, m); 
printarr (a1, m);
printf ("\nHow many elements to store in a2\n"); 
scanf ("%d", &n);
getarr (a2, n); 
printarr (a2, n); 
merge (a1, a2, a3, m, n);
printarr (a3, m+n);
return (0);
} 

