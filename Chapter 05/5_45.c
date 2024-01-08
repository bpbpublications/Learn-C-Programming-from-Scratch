#include <stdio.h>
#include <string.h>
void getmat (int mtr [5][5], int r, int c) {
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


void printmat (int mtr [5][5], int r, int c) {
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

int main()
{
	int mat [3][3],r,c;
	printf("Enter Order R and C \n");
	scanf("%d%d", &r, &c);
	getmat(mat,r,c);
	printmat(mat,r,c);
}