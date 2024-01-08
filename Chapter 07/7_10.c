//Union Example 3
#include <stdio.h>
union std { 
int rn;    
float mks;
char nm [20]; 
};  

int main () {
union std s;
s.rn = 10;
printf ("Id: %d\n", s.rn);   
s.mks = 220.5;
printf ("Marks: %f\n", s.mks); 
strcpy (s.nm, "Saleem"); 
printf ("Name: %s\n", s.nm);
return (0); 
}


