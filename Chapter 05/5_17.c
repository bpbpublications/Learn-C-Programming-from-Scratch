#include <stdio.h>
#include <string.h>
int main ()
{
char snm [20];
char nm [20];
printf ("Whats your name\n");
scanf ("%s", nm); 
strcat (nm, " ");
printf ("Whats your surname\n");
scanf ("%s", snm);
strcat (nm, snm);
 printf ("Full Name is %s\n", nm);
return (0);
}

