//Array of pointers - example 3

#include <stdio.h>
int main () {    
char *n [] = { 
      "Zain", 
      "Zaid", 
      "Usman", 
      "Imad", 
   };    
int i = 0; 
for (i = 0; i < 4; i++)
 { 
      printf("Good Boy [%d] = %s\n", i+1, n[i]);
 }
return (0);
} 
