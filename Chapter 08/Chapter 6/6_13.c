//Changing array elements directly
#include <stdio.h>
#include <stdlib.h>
int main () {
int a [5] = {10, 20, 30, 40, 50};
int i=0, *p;
p = a;				// Points to the first element of array
while (i<5) {
*p = *p + 10;			// changing every array value by +10
printf("%d\n", *p);
p++;			// Moves the pointer to the next element’s address
i++;
}
return (0);
} 
