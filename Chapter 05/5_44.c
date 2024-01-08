#include <stdio.h>
void printmat (int** mtr, int r, int c) {
for (int i = 0; i < r; i++)
 {
 for (int j = 0; j < c; j++) 
  {
printf ("%d\t", mtr[i][j]);
  }
 printf("\n");
 }
}
int main () {
int mtr [3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int* p [3];
for (int i = 0; i < 3; i++) {
p[i] = mtr[i];
}
printmat (p, 3, 3);
return 0;
}
