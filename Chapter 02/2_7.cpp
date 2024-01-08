#include<stdio.h>
int main () {
int a, b, temp;
printf ("Input 2 numbers\n");
scanf ("%d%d", &a, &b);
// value of a is assigned to temp
temp=a;
// value of b is assigned to a
a = b;
// value of temp (initial value of first) is assigned to b
b = temp;
printf ("\nAfter swapping, first number = %d\n", a);
printf ("After swapping, second number = %d\n", b);
return (0);
}
