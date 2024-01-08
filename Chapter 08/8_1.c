//	Opening a sequential file.

#include <stdio.h>
int main ()
{
FILE* fp = fopen ("data.txt", "w");
if (fp == NULL) 
 {
printf ("File cannot be opened\n");
return (1);
 }
 printf ("File opened Successfully\n");
// Do file operations and close the file
return (0);
}
