#include <stdio.h>
void getmat (int mtr [][3], int r, int c) {
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


void printmat (int mtr [][3], int r, int c) {
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

void multiplymat (int mat1[][3], int mat2[][3], int mat3[][3], int r1,int c1, int r2, int c2) {
int i, j, k; 
for (i = 0; i < r1; i++)
 { 
  for (j = 0; j < c2; j++) 
  { 
	mat3[i][j] = 0; 	 //initialize mat3[i][j] to 0 for each mat3[i][j] 
	for (k = 0; k < c1; k++) 
	 { 	 	 
		mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j]; 	  
        } 
   }
 }
} 
int main () {
int mat1[3][3], mat2[3][3], mat3[3][3], i, j, r1, c1, r2, c2;
printf ("Input order of matrix 1\n"); 
scanf ("%d%d",&r1, &c1);
printf ("Input order of matrix 2\n"); 
scanf ("%d%d", &r2, &c2);
if (c1 != r2) {
printf ("Invalid order of matrices - multiplication not possible\n"); 
exit (0); 
} 
getmat (mat1, r1, c1); 
printmat (mat1, r1, c1);

getmat (mat2, r2, c2); 
printmat (mat2, r2, c2); 

multiplymat (mat1, mat2,mat3, r1, c1, r2, c2); 
printmat (mat3, r1, c2); 	 	 	//to print matrix 3
return (0);  	
} 
