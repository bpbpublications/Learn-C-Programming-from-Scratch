//	Deleting a file Using remove()
#include <stdio.h>
int main()
{
char file[] = "D:\\s.txt";
// Attempt to remove the file
if (remove(file) == 0)
 {
printf("File '%s' removed successfully.\n", file);
 } 
else
 {
        perror("Error removing the file");
 }
return(0);
}
