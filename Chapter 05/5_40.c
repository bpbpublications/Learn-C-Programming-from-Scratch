#include <stdio.h>
#include <stdlib.h>
int main () {
char **twoD; 
int i=0,rows = 3, cols = 4; 		// Allocate memory for the rows two
twoD= malloc (rows * sizeof (char *)); // Allocate memory for the columns for (int i = 0; i < rows; i++)
twoD[i] = (char *) malloc (cols * sizeof(char)); // Assign values to the array twoD[0] = "abcd"; twoD[1] = "efgh"; twoD[2] = "ijkl"; 
return 0;
} 
