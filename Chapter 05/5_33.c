#include <stdio.h>
#include <string.h> 
int compare (char s1[10], char s2[10]) {
int i = 0; 
if (strlen (s1) != strlen (s2))
 {
return (1);
  }
else 
 { 
while (s1[i] != NULL)
 { 
if (s1[i] != s2[i]) 
return (1);
i++; 
} 
 } 
return (0); 
} 




int main () {
char s1[10], s2[10];  int n; 
printf ("Input 2 strings\n"); 
scanf ("%s%s", &s1,& s2); 
n = compare (s1, s2); 
if (n == 0) 
printf ("Strings are same\n"); 
else
printf ("Strings are different\n");
return (0); 
} 