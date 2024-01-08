#include <string.h>
#include <stdio.h>
int main () 
{
char str [20], substr [20];
char* found;
printf ("Input a string\n");
scanf ("%s", str);
printf ("Input a sub-string\n");
scanf ("%s", substr);
found = strstr (str, substr);
if (found!=NULL)
 {
	printf ("String found\n");
 } 
else
 {
	printf ("String not found\n");
 }
return 0;
}
