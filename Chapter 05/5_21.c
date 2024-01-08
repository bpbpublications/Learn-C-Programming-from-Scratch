#include <string.h>
#include <stdio.h>
int main () {
char s []="SALEEM";
int i=0;
while (s[i]!=NULL)
 {
s[i]=s[i] + 32; // -32 when converting uppercase char to lower case char
i++;
 }
s[i]=NULL;
printf ("%s", s);
return 0;
}
