//realloc() example using char array (string)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
// Declare a character array/pointer and allocate memory
char *p = (char *)malloc(20 * sizeof(char));
if (p == NULL)
 {
      printf("Memory allocation unsuccessful.\n");
      return(1);
 }
// assign the character array some text
strcpy(p, "Hello, zain!");
printf("before using realloc message = \n%s\n", p);

// Resize the character array using realloc
p = (char *)realloc(p, 30 * sizeof(char));
if (p == NULL)
 {
printf("Memory reallocation unsuccessful.\n");
return(1);
 }
 // append text to the end of string
strcat(p, " How are you?");
printf("after using realloc Message =\n %s\n", p);
free(p);
return(0);
}
