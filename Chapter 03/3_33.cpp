#include <stdio.h>
#include <conio.h>
int main () {
int n1, n2;
do
{
printf("Input 2 numbers\n");
scanf ("%d%d", &n1,&n2);
if (n2 == 0) {
printf("Cannot Divide by Zero\n");
break;
}
printf("Quotient = %d\n", n1/ n2);
printf("Press y to continue\n");
} while (getche()=='y');
return (0);
}


