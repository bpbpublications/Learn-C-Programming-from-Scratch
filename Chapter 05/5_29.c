#include <stdio.h>
#include <string.h>
int main () 
{
char s [] = "http://www.jkims.in/main/index.aspx";
char d [] = "/";
char *token = strtok (s, d);
while (token!= NULL) 
 {
    printf ("%s\n", token);
    token = strtok (NULL, d);
 }
return(0);
}
