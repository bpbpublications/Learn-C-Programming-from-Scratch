#include<stdio.h>
int main ()
{
int a [10], i;			//a is an array of 10 integers
printf ("Input array elements\n");
for (i = 0; i < 10; i++) 
  {
    scanf ("%d", &a[i]); 
   } 
printf ("Here are the array elements\n");
for (i = 0; i < 10; i++)
  { 
    printf ("%d\t", a[i]); 	 //    output each array element's value
  }
return (0);
} 

