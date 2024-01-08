//Array access:
#include <stdio.h>
#include <stdlib.h>

int main () {
int i=0,a[5] = {10, 20, 30, 40, 50};
int *p;
p = a;
printf("Displaying array elemets using pointer\n");
while (i<5)		
{		
printf("%d\n", *p);
p++;
i++;
}
return (0);
} 
