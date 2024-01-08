//	Program to find the number of lines in a text file
#include <stdio.h>
int main ()
{
FILE *fp;
int lines = 1;
char file[40]="s.txt", chr;
fp = fopen (file, "r");		//s.txt is the file to be read
chr = getc (fp);
while (chr!= EOF)
 {
if (chr == '\n') 	//Count whenever new line is encountered
 {
            lines = lines + 1;
 }
  chr = getc(fp); 		//take next character from file.
 }
fclose (fp); 					//close file.
printf ("There are %d lines in %s file\n", lines, file);
return (0);
}
