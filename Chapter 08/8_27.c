#include <stdio.h> 
int main()
{ 
char str [] = "This is a sample para"; 
FILE *fp;
int ch; 
/* First let's write some content in the file */    
fp = fopen ("file.txt", "w");    
fwrite (str, 1, sizeof (str), fp);    
fclose (fp); 
fp = fopen ("file.txt", "r");    
printf ("Contents of the file\n"); 
while (1)
 { 
ch = fgetc (fp);
if (feof (fp)) { 
break; 
} 
printf ("%c", ch); 
} 
rewind (fp);
printf ("\nContents of the file after rewind\n"); 
while (1)
 { 
ch = fgetc (fp); 
if (feof (fp))
 {
         break;
 }
printf ("%c", ch); 
 } 
fclose (fp); 
return (0); 
} 
