#include <stdio.h>
int main () {
int n1, n2, n3, lmt; 
printf("Input Starting Term 1 and Term 2\n");
scanf ("%d%d", & n1, & n2);
printf("Input Limit of the series\n");
scanf ("%d", & lmt);

while (n1<=lmt)
{ 
printf("%d\t", n1); 
n3 = n1 + n2;
n1=n2; 
n2=n3; 
} 
return (0);
} 
