//realloc() example using int array 
#include <stdio.h>
#include <stdlib.h>
int main() 
{
int *a;
// memory for an array of 5 integers
a = (int *)malloc(5 * sizeof(int));
if (a == NULL)
 {
printf("Memory allocation failed\n");
        return(1); // Exit the program with an error code
 }
// Initialize the array with some values
for (int i = 0; i < 5; i++) 
 {
        a[i] = 2*i;
 }
// Print the initial array
printf("Initial array: ");
for (int i = 0; i < 5; i++)
 {
printf("%d ", a[i]);
 }
printf("\n");
    
// Resize array to store 10 integers using realloc
a = (int *)realloc(a, 10 * sizeof(int));
if (a == NULL) 
 {
printf("Memory re-allocation failed\n");
       return(1); 
 }
// Initialize the additional elements
for (int i = 5; i < 10; i++)
 {
     a[i] = 2*i;
 }
printf("Resized array: ");
for (int i = 0; i < 10; i++)
 {
printf("%d ", a[i]);
 }
printf("\n");
// Free the memory
free(a);
return 0; // Exit the program successfully
}
