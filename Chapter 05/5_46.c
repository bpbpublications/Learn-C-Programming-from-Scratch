#include <stdio.h>
void getmat (int mtr [][5], int r, int c) {
 int i, j; 	
 printf ("Input Matrix Elements\n");	// r and c are the no. of rows and columns respectively (order: r x c) 
for (i = 0; i < r; i++)
 {
  for (j = 0; j < c; j++)
  {
      scanf ("%d", &mtr[i][j]); 
  } 
 }  
}


void printmat (int mtr [][5], int r, int c) {
int i, j; 
printf ("Given Matrix is\n");
for (i = 0; i < r; i++) 
 {	
  for (j = 0; j < c; j++) 
  { 
    printf ("%d\t", mtr[i][j]); 
  } 
 printf ("\n"); 
 }  
} 

void addmat (int mat1[][3], int mat2[][3], int mat3[][3], int r, int c) { 
int i, j; 
for (i = 0; i < r; i++)
 { 	 
  for (j = 0; j < c; j++) 
   {
       mat3[i][j] = mat1[i][j] + mat2[i][j]; 
// mat3 [0][0] = mat1[0][0] + mat2[0][0] and so on 
  } 
 } 
}
int main () {
int mat1[3][3], mat2[3][3], mat3[3][3], r, c; 
printf ("Input order of matrices - R and C \n");  	 	
scanf ("%d%d", &r, &c); 

getmat (mat1, r, c); 
printmat (mat1, r, c); 

getmat (mat2, r, c); 
printmat (mat2, r, c); 
addmat (mat1, mat2, mat3, r, c); 
printmat (mat3, r, c); 			//to print matrix 3 
return (0);  	
} 
