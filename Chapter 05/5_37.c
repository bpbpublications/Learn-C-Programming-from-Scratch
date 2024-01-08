#include<stdio.h>
int main ()
{
// Declaration and initialization of a 2D string array
char str [10][30] = {
        "Welcome",
        "to!",
        "C Programming"
    };
// Printing the strings
for (int i = 0; i < 3; i++) 
{
 printf ("%s\n", str [i]);
}
 return (0);
}