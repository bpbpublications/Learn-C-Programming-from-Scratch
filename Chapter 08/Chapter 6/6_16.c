//Modifying characters in a string:
#include <stdio.h>
#include <stdlib.h>
int main () {
char s[6] = "Gello";
char *p;
p=s;
*p= 'H';			// change 1st character to G
printf("%s", s);  
return (0);
}
