//Enum example

#include <stdio.h>
struct std 
{
    int rn;
    char nm[50];
    char std[100]; 
}; 
void prnt (struct std *); 	 	 	// function prototype 

int main () 
{
struct std s, *p;  
p =&s;
printf("Input Roll No., Name, Class of student\n"); 
scanf("%d%s%s", &p->rn, &p->nm, & p->std); 
prnt(p); 
}  

void prnt (struct std *p)
{ 
printf ("%d\t%s\t%s\n", p->rn, p->nm, p->std); 
} 
  

