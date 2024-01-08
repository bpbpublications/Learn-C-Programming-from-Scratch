
//	ERNO Example
#include <stdio.h>
#include <errno.h>
extern int errno;
int main ()
{ 
FILE * fp; 
fp = fopen("filedoesnotexist.txt", "rb"); 
if(fp == NULL)
 { 
	 fprintf (stderr, "Value of errno: %d\n", errno); 
 } 
else 
 {
 	fclose (fp); 
 } 
return (0); 
} 
