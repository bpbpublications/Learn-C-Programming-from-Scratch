//Relational comparison:
#include <stdio.h>
#include <stdlib.h>
int main () {
int a [5] = {10, 20, 30, 40, 50};
int* p1 = &a [1];
int* p2 = &a [3];
if (p1 < p2) {
printf("p1 points to a lower memory location than p2");
   }
else {
printf("p2 points to a lower memory location than p1");
   }
return (0);
}
