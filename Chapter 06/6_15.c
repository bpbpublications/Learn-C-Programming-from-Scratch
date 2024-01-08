//Accessing characters in a string:
#include <stdio.h>
#include <stdlib.h>
int main ()
{
char *s = "Think Green";
char *p = s;
while (*p!= '\0')
 {
printf("%c", *p); 
p++;
  }
 return (0);
}
