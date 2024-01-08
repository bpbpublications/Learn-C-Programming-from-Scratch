#include <stdio.h>
#include <string.h>
int main () 
{
char s [] = "Beautiful";
char *loc = strchr (s, 'u');

if (loc == NULL)
 {
       printf ("Character not found");
 }
 else
 {
       printf ("Character found at position: %d", loc - s);
 }
return (0);
}
