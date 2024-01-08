#include<stdio.h>

int main () {
int n1, n2;
printf("Input numbers to compare\n");
scanf("%d%d",&n1,&n2);
if (n1 > n2)
{
printf("First number is greater than second number");
}
else if (n2 > n1)
{
printf("Second number is greater than the first number ");
}
else
{
printf("\n The given numbers are equal");
}
return (0);
}

