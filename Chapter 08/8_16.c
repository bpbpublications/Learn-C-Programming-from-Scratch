//	Deleting all records from a random-access file
#include <stdio.h>
struct std
{
int rn;
char nm[50];
float mks;
};
int main ()
{
FILE *fp;
int r;
struct std s;
fp = fopen("s.dat", "wb");
if (fp == NULL)
 {
        printf ("File cannot be opened.\n");
        return (1);
 }
fclose(fp);	// since we opened the file for writing it ERASES all data
printf ("All records deleted successfully.\n");
return(0);
}
