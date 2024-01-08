#include <string.h>
#include <stdio.h>
int main () {
char s []="saleem";
int i=0;
while (s[i]!=NULL)
 {
s[i]=s[i] - 32; // +32 when converting lowercase char to uppercase char
i++;
 }
s[i]=NULL;
printf ("%s", s);
return 0;
}
