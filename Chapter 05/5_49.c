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

int checkidentity (int a[10][10], int m, int n)
{
int i, j;
for (i = 0; i < m; i++)
 {
  for (j = 0; j < n; j++)
   {
	if (i == j && a[i][j] != 1)
	{
		return (0);	
	}	
	else if (i!= j && a[i][j] != 0)
 	{
		return (0);	
 	}
	}	// End of for j
 	}	// End of for i
// End of function
return(1);
}


int main () {
int mtr [10][10],m, n,flag;
printf ("Input the order of the matrix \n");
scanf ("%d %d", &m, &n);
getmat (mtr, m, n);           
printf ("The given matrix is \n");
printmat (mtr, m, n);
flag= checkidentity (mtr, m, n);
if (flag == 1)
 {
printf ("It is an IDENTITY MATRIX\n");
	 }
else
 {
	printf ("It is NOT an identity matrix\n");
 }
return (0);
}
