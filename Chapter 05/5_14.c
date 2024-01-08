#include <stdio.h>
int main ()
{
char nm [10];
int i = 0;
printf("Whats your name\n");
scanf ("%s", &nm);	
// starting from 0 till NULL character is reached
printf("Hello ");
while (nm[i]!= '\0') 
 {	
printf ("%c", nm[i]);	// we are printing one character at a time (%c)
i++;
 }
return 0;
}
