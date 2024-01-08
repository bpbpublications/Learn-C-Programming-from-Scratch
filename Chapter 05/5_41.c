#include <stdio.h>
int main () 
{
int mtr [3][3] = 
{
{0,1,2}, 
{1,2,3},		// Matrix with 3 rows and 3 columns    
{2,4,5}
}; 	 	
int i, j; 
for (i = 0; i < 3; i++)
 {	 // output each array element's value
  for (j = 0; j < 3; j++) 
   {
printf ("%d\t", mtr[i][j]); 
   }            
printf ("\n"); 
 } 
return (0);
} 
