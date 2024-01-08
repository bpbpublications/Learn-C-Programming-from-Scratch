//Union Example 2
#include <stdio.h>
union std { 
int rn;    
float mks;
char nm [20]; 
};  

int main () {
union std s;
s.rn = 10;
s.mks = 220.5; 
strcpy (s.nm, "Saleem"); 
printf ("Id: %d\n", s.rn);    
printf ("Marks: %f\n", s.mks); 
printf ("Name: %s\n", s.nm);
return (0); 
} 

