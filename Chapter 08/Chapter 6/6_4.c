//calloc Example
#include <stdio.h>
#include <stdlib.h>
int main () {
int n, i, *ptr;
printf("Input number of elements:");
scanf("%d", &n); 
ptr = (int*) calloc (n, sizeof(int));
if (ptr == NULL) {
printf("Memory not allocated");
exit (0);
} 
printf("Memory successfully allocated using calloc.\n");
free(ptr); 
return 0; 
} 
