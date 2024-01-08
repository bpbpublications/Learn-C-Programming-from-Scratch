//Swapping array elements
#include <stdio.h>
#include <stdlib.h>
int main () {
int a[] = {10, 20, 30, 40, 50};
int *p1 = a; 
int tmp;
int *p2;
p2 = &a[4];   		// Points to the last element of arr
tmp = *p1;		// Store the value of the first element in a temporary variable
*p1 = *p2;		// Swap the values of the first and last elements
*p2 = tmp;
for (int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
}
return (0);
}
