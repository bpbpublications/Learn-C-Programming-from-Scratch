//	Pointer Indirection and access
#include <stdio.h>
int main ()
{
int a [5] = {13, 21, 43, 20, 34};
int* p=a;
int** p2p;
p2p = &p;
printf("First Element of the array is %d", **p2p);
return (0);
}