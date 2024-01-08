#include <stdlib.h> 
#include <string.h> 
int main ()
{
char n [100]; 
char *d; 
strcpy (n,"Umar zain"); 
// will allocate 200 bytes, remember size of char is 1 byte 
d = malloc (200 * sizeof (char));
if (d!= NULL)
 {
strcpy (d,"Umar zain is a DPS student in class 6th");
 }
else
 {
      printf("Error–- unable to allocate required memory\n");
 }
printf("Name = %s\n", n);
printf("Details: %s\n", d);
return (0);
} 
