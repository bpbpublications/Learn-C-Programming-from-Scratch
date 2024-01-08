#include <stdio.h>
#include <string.h> 
int length (char s[10]) {
int i = 0; 
while (s[i]!= NULL) 
 {
i++; 
 } 
return (i);
}

int main () {
char s[10];  int n; 
printf ("Input string \n"); 
scanf ("%s", &s); 
n = length (s); 
printf ("length of the string is %d\n", n); 
return (0); 
}
