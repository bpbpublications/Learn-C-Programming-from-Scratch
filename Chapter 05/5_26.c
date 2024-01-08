#include<stdio.h>
#include <string.h>
int main ()
{

char s1[]="";
char s2[]="";
printf ("Input 1st string\n");
scanf ("%s", s1);
printf ("Input 2nd String2\n");
scanf ("%s", s2);
if (strcmp(s1,s2)==0)
 {
printf ("The two strings are same");
  }
else
 {
printf ("The two strings are different");
  }
return (0);
}
