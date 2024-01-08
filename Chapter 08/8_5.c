//	Write a string onto a file using fputs()
#include <stdio.h>
int main ()
{
FILE* fp = fopen ("data.txt", "w");
char* s;
if (fp == NULL)
 {
printf ("File cannot be opened\n");
return (1);
 }
s = "Good to see you Programming";
if(fputs (s, fp) == EOF)
 {
printf ("Cannot write onto the File\n");
fclose(fp);
return (1);
 }
   fclose(fp);
   printf ("Data successfully written to the file\n");
   return (0);
}
