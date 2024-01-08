#include<stdio.h>
int main () 
{
char s[100],c;
int i, freq [26] = {0};	
printf ("Input a lowercase string\n");
scanf ("%s", s);
for (i = 0; s[i]!= '\0'; i++) 
 {	// step 2: traversing the string
       freq [s[i]-'a'] += 1;
 }
printf ("The frequency of characters is -\n");
for (i = 0; i < 26; i++)
 {
    if (freq[i]!= 0)
 	{
          // obtain characters by adding the ASCII value of 'a'
          c = 'a' + i;	//for example to obtain c, we use ‘a’ + 2
          printf ("\t%c = %d\n", c, freq[i]);
     	}
 }
return (0);
}
