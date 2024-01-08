#include <stdio.h>
#include <stdlib.h>
struct emp
{ 
int id;    
char nm [50];
float mks;    
};  
int main ()
{ 
struct emp tmp, e[]=
{
	{1,"Zain", 22},
       {2,"Usman", 21},
       {3,"Imad", 28},
{4,"Saad", 24},
{5,"saleem", 27}
};
int i,j, n=5; 	      	 	 
printf("Unsorted records\n");
for (i=0; i<n; i++)
 {	// print records 
printf ("%d\t%s\t%f\n", e[i].id, e[i].nm, e[i].mks);
 } 
// selection sort 
 for (i=0;i<n-1;i++)
  {
 	for(j=i+1;j<n;j++)
 	 {
 		if (e[i].mks<e[j].mks)	// descending Order - Merit
 		{
 			tmp=e[i];
 			e[i]=e[j];
 			e[j]=tmp;
		 }
	 }
 }
printf("Sorted records\n");
for (i=0; i<n; i++)
 {	// print records 
printf ("%d\t%s\t%f\n", e[i].id, e[i].nm, e[i].mks);
 } 	 
return (0); 	 	
} 
