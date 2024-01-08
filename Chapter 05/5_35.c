#include <stdio.h>
#include <string.h>

int main () {
char s [20];
int i, l;
int flag = 0;
printf ("Input a string\n");
scanf ("%s", s);
l = strlen (s);
for (i=0; i < l; i++)
  {
if(s[i] != s [l-i-1])
{
        flag = 1;
        break;
    }
 }
if (flag)
{
printf ("%s is not a palindrome", s);
}    
else
{
    printf ("%s is a palindrome", s);
}
return 0;
}
