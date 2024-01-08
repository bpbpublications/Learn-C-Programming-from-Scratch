
#include <stdio.h>
#include <string.h>
int main ()
{
char str[10][30];
// Reading strings from the user
for (int i = 0; i < 3; i++)
 {
printf ("Input string %d: ", i + 1);
fgets(str[i], 30, stdin);
// Remove trailing newline character
str[i][strcspn(str[i], "\n")] = '\0';
 }
for (int i = 0; i < 3; i++) 
 {
printf ("String %d: %s\n", i + 1, str[i]);
 }
return (0);
}
