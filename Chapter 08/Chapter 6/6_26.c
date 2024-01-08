//	Dynamic memory allocation: 
#include <stdio.h>
int main () 
{
int** mat, r=3, c=1, i;
mat = (int**)malloc(r * sizeof(int*));
for (i = 0; i < r; i++)
 {
  mat[i] = (int*) malloc (c * sizeof(int));
  *mat[i] = i+1;
  printf("%d\t", *mat[i]);
 }
}