//Write a paragraph onto a file 
#include<stdio.h>
int main () 
{ 
FILE *fp; 	 
char chr;	 	 
fp = fopen ("s.txt", "w");  
	while ((chr=getche ())!= "~") {// write to file the characters till user presses ‘~’
fputc (chr, fp); 
}
fclose (fp);
fp = fopen ("s.txt","r");  
while (!feof(fp))  { 
chr = fgetc(fp);
printf ("%c", chr);
} 
fclose (fp); 
return (0);
}
