#include <stdio.h>
int main () {
int n1, n2, n3;
printf("Input 3 numbers\n");
scanf ("%d %d %d", &n1, &n2, &n3);
if (n1 >= n2 && n1 >= n3) 
{
        printf("%d is the largest number\n", n1);
}
else if (n2 >= n1 && n2 >= n3)
{
        printf("%d is the largest number\n", n2);
}
else
{
        printf("%d is the largest number\n", n3);
}
return 0;
}
