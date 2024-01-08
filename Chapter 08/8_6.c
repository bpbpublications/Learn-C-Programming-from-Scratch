//	Using fprintf()
#include <stdio.h>
int main () {
FILE* fp = fopen ("data.txt", "w");
int x;
if (fp == NULL) 
 {
printf ("File cannot be opened\n");   
return (1);
 }
x = 10;
fprintf (fp, "The inputted value is: %d\n", x);
printf ("File write successful\n");   
fclose(fp);
return(0);
}
