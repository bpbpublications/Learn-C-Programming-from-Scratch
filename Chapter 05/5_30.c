#include <stdio.h>
#include <string.h> 
int main () {
	int n;
char s1[10], s2[10]; 
printf ("Input String 1\n");
scanf ("%s", &s1); 
n = strlen (s1);
printf ("Length of s1 is %d\n", n); 
strcpy (s2, s1);
printf ("String 2 is %s\n", s2);
n = strcmp (s1, s2); 
if (n == 0)
 {
printf ("Strings are same\n");
 }
else
 {
printf ("Strings are different\n");
 }
printf ("Reverse of string 1 is %s", strrev (s1)); // print reverse of s1 
return(0);
} 

