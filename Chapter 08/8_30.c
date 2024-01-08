//	Program to count number of words in a file
#include <stdio.h>  
#include <stdlib.h>  
int main()
{
char ch;  
FILE *fp;  
int count = 0;  
fp = fopen("s.txt","r");		//Opens a file in read mode   
while ((ch = fgetc(fp)) != EOF)
 {  
//Counts each word  
if (ch ==' ' || ch == '\n')
 	 {  
count++;  
 	 }  
 }
printf ("Number of words present in given file: %d", count);  
fclose(fp);  
return (0);   
}  
