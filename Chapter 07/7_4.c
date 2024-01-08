//Array of structures

#include <stdio.h>
struct emp
{ 
int id;    
char nm [50];
char par [50];    
char adr [100];    
};  
int main ()
{ 
struct emp e[10];
int i, n; 	      	 	 
printf ("Input No. of employees to be recorded\n");
scanf ("%d", &n); 
for (i=0; i<n; i++) 
 {
printf ("Input Id, Name, Parentage and address of Employee\n");
scanf ("%d%s%s%s", e[i].id, e[i].nm, e[i].par, e[i].adr); 
 } 
for (i=0; i<n; i++)
 {	// print records 
printf ("%d\t%s\t%s\t%s\n", e[i].id, e[i].nm, e[i].par, e[i].adr);
 } 	 
return (0); 	 	
} 
