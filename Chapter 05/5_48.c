#include <stdio.h>
void getmat (int mtr[][3], int r, int c) {
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


void printmat (int mtr[][3], int r, int c) {
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

int sumDE (int mtr[][10], int r) {
int i, sum=0;
for (i = 0; i < r; i++)
 {

 		 sum = sum + mtr[i][i];
}
return (sum);
}

int main () {
int mtr[10][10];
int sum, m, n;
printf ("Input the order of the matrix\n");
scanf ("%d %d", &m, &n);
if (m == n) 
 {
  getmat (mtr, m, n);       
  printf ("The given matrix is \n");
  printmat (mtr, m, n);
  sum=sumDE(mtr, m);
  printf ("\nThe sum of the main diagonal elements is = %d\n", sum); 
 }
else
{
 printf ("The given order is not square matrix\n");
 }
return (0);
}
