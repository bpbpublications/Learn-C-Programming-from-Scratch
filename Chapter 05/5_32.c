#include <stdio.h>
#include <string.h> 
void copy (char s2[10], char s1[10])
{ 
int i = 0; 
while (s1[i] != NULL) 
 {
s2[i] = s1[i]; 
i++; 
 } 
 s2[i]=NULL;
}

int main () {
char s1[10], s2[10];  int n; 
printf ("Input string 1\n"); 
scanf ("%s", &s1); 
copy(s2,s1);
printf("s2 = %s",s2);
return (0); 
}
