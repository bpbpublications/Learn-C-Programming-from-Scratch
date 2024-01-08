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
void merge (int a [], int mid, int low, int high)
{
int i, j, k, t [100];
i = low; j = mid + 1; k = low;
while (i <= mid && j <= high)
 {
    if (a [i] < a [j])
{
t[k] = a [i];
            i++; k++;
     }
    else 
{
      t[k] = a [j];
      j++; 
k++;
       }
 }
 while (i <= mid)
  {
t [k] = a [i];
k++; i++;
  }
 while (j <= high)
  {
        t[k] = a [j];
        k++; j++;
  }
 for (int i = low; i <= high; i++)
  {
        a [i] = t [i];
  }   
}


void mergeSort (int a [], int low, int high)
{
int mid; 
if(low<high) 
  {
mid = (low + high) /2;
mergeSort (a, low, mid);
mergeSort (a, mid+1, high);
merge (a, mid, low, high);
  }
}

int main () {
int a[10], n;
printf ("How many elements to store in array\n"); 
scanf ("%d", &n);
getarr (a, n); 
printarr (a, n); 
mergeSort (a, 0,n-1);
printarr (a, n);
return (0);
} 

