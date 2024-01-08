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

void transpose (int mtr[][10], int m, int n) {
int i, j,t;
for (i = 0; i< m;i++) 
 {
  for (j = 0; j < n; j++)
  {   
  	t=mtr[i][j];
  	mtr[i][j]=mtr[j][i];
        mtr[j][i]=t;
  }
 }
}
int main () {
int trp[10][10], mtr[10][10],m, n, flag;
printf ("Input the order of the matrix \n");
scanf ("%d %d", &m, &n);
getmat (mtr, m, n);           

printmat (mtr, m, n);
transpose (mtr, m, n);
printf ("Transpose of the given matrix is \n");
printmat(mtr,m,n);		// order of trp would change to n x m
return (0);
}
