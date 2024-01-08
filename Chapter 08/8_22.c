//	Program for file programming
#include <stdio.h>
struct student
{
int rn; 
char nm[20]; 
}; 
int main()
{
struct student s; 
char *n; int i, r; 
FILE *fp; 
fp=fopen ("s.txt","w"); 
for (i=0;i<5; i++)
 {
printf ("Input roll no. and name of student\n"); 
scanf ("%d%s", &s.rn, & s.nm); 
fprintf (fp,"%d%s", s.rn, s.nm);  
 } 	 	 	//printing onto file 
fclose (fp); 
fp=fopen ("s.txt","r"); 
while (!feof (fp))
 {	// feof() returns true if EOF is reached, false otherwise 
fscanf (fp,"%d%s", r,n);  //using fscanf () to get block of data
//printing it on screen
printf ("Roll no = %d, name = %s\n", r, n); 		 
 } 
return (0);
} 
