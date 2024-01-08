//	Program to count number of characters in the file
#include<stdio.h>
#include<conio.h>
int main () 
{
char ch;
int count=0;
FILE *fp;

fp=fopen ("s.txt","r");
printf ("\nContents of the File is:");
while((ch=fgetc(fp))!=EOF)
 {
	count++;
	printf ("%c", ch);
 }
fclose (fp);
printf ("\nNumber of characters present in file is: %d", count);
return(0);
}
