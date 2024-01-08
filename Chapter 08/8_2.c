//Creating a sequential file and writing data to it. 
#include<stdio.h>
int main()
{ 
FILE *fp; 
char chr;	 	 	 
fp = fopen ("s.txt","w");  
fputc ('H', fp); 
fputc ('E', fp); 
fputc ('L', fp);	 	// will print HELLO onto the file s.txt 
fputc ('L', fp); 
fputc ('O', fp); 
fclose (fp); 
fp = fopen ("s.txt","r");  
while (!feof(fp)) 
{ 
chr = fgetc(fp);
printf ("%c", chr);
} 
return (0);
fclose (fp); 
}

