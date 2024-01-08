//	Write numbers to a file 
#include<stdio.h>
int main () 
{
FILE *fpe, *fpo; 	 	
int nm;  	 	 
fpe = fopen ("even.txt","w"); //open even. txt and odd.txt files for writing 
fpo = fopen ("odd.txt", "w"); 
for (nm=1; nm<=20; nm++) {  
if (nm%2 ==0) 
putw ((char)nm, fpe); 	//if even number, write to even file else write to odd file 
else
putw ((char)nm, fpo); 
} 
fclose (fpe);
fclose (fpo); 
printf("\nOdd Numbers:\n");
fpo = fopen ("odd.txt", "r"); 
while ( (nm = getw(fpo)) != EOF )
 {
    printf ("%d\t", nm);
  }
fclose (fpo); 
fpe = fopen ("even.txt","r");  
printf("\nEven Numbers:\n");
 
while ( (nm = getw(fpe)) != EOF)
 {
    printf ("%d\t", nm);
 }
fclose (fpe); 
return (0);
}
