#include <stdio.h>

void printmat (int mtr [][3])
{
for (int i = 0; i < 3; i++)
 {
  for (int j = 0; j < 3; j++)
   {
printf ("%d\t", mtr[i][j]);
   }
 printf("\n");
 }
}

int main () {
int mtr [3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
printmat (mtr);
return(0);
}

