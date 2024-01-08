#include <stdio.h>
#include <stdlib.h>
int main ()
{
int n, *ptr; 
printf("Input number of elements\n");
scanf("%d", &n); 
ptr = (int*) malloc (n * sizeof(int));
if (ptr == NULL) {
printf("Error! memory not allocated");
exit (0);
} 
printf("Memory successfully allocated using malloc.\n");
free(ptr); 
return 0; 
} 
