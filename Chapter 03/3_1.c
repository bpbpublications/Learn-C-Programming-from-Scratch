#include <stdio.h>
int main () {
int n;
printf("Input a number\n");
scanf ("%d", &n);
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
        printf("%d is negative\n", n);
} 
else
{
        printf("Looks like you entered a zero\n");
}
return (0);
}
