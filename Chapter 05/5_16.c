#include <stdio.h>
int main () {
char nm [30];
printf ("Whats your name\n");
fgets (nm, sizeof(nm), stdin); 
printf ("Hello ");
puts(nm); 					// display string
return (0);
}
