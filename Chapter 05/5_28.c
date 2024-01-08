#include <stdio.h>
#include <string.h>
int main ()
{
char s[] = "Information!";
char d []="";
int c = 3; 	// No. of characters to be copied
strncpy (d, s, c);
d[c] = '\0'; 		// Put a NULL character to terminate the string
printf ("Destination string: %s", d);
return (0);
}
