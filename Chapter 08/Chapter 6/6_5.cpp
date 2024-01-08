//realloc Example
#include <stdio.h> 
#include <stdlib.h>
int main () 
{
int *ptr, n; 
ptr = (int*) malloc (10 * sizeof(int));
if (ptr == NULL) {
printf("Error! memory not allocated");
exit (1); 
} 
printf("Memory successfully allocated using malloc.\n"); 
printf("Enter new size of memory:\n"); 
scanf("%", &n); 
ptr = (int*) realloc(ptr, n * sizeof(int));
if (ptr == NULL) {
printf("Error! memory not reallocated"); 
exit (0);
} 
printf("Memory successfully reallocated using realloc");
return (0);
}
