//	Displaying all records from a random-access file
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
struct std s;
fp = fopen("s.dat", "r+b");
if (fp == NULL)
 {
        printf ("File cannot be opened.\n");
        return (1);
 }
printf ("Roll No.\t\t Name\t\tMarks\n");
while (fread (&s, sizeof (struct std), 1, fp))
 {
        printf ("   %d\t\t", s.rn);
        printf ("   %s\t\t", s.nm);
        printf ("   %.2f\n", s.mks);
 }
fclose(fp);
return (0);
}
