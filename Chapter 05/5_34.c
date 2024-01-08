#include <stdio.h>
#include <string.h> 
void reverse (char s [10]) {
int n, i, j=0; 
char temp[10];  
n=strlen(s) -1; 
for (i= n; i >=0; i--)
 {
temp[j++] = s[i];
  }	//Temporary string 
temp[j]=NULL; 	//put NULL character at last to complete the string
strcpy (s, temp); 	// copy the reversed sing to the original string - s
} 


int main () {
char s[10]; 
printf ("Input a string\n"); 
scanf ("%s", &s); 
reverse (s); 
printf ("Reversed string is %s", s);
return (0);
} 