#include <string.h>
#include <stdio.h>
int main () {
char s []="I am a good Boy";
char substr []="Boy";
char newstr[]="Girl";
char* found;
found = strstr(s, substr);
if (found!=NULL) 
 {
strcpy (found, newstr);
	printf ("%s", s);
 } 
 else
 {
	printf ("String not found\n");
}
return 0;
} 
