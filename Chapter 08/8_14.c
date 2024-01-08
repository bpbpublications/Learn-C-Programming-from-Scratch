//	Counting the number of records in a random-access file
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
int c;
struct std s;
fp = fopen("s.dat", "r+b");
if (fp == NULL)
 {
        printf ("File cannot be opened.\n");
        return (1);
 }
c=0;

while (fread(&s, sizeof(struct std), 1, fp))
 {
        c++;
 }
fclose(fp);
printf ("No. of Records in the file =%d", c);
return (0);
}
