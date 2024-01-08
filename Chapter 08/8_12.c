//	Appending a record to a random-access file
#include <stdio.h>
struct std 
{
int rn;
char nm [50];
float mks;
};

int main ()
{
FILE *fp;
int r;
struct std s;
fp = fopen ("s.dat", "r+b");
if (fp == NULL)
 {
        printf ("File cannot be opened.\n");
        return (1);
 }
printf ("Enter Roll No: ");
scanf ("%d", &s.rn);
printf ("Enter Name: ");
scanf (" %[^\n]", s.nm);
printf ("Enter Marks: ");
scanf ("%f", &s.mks);
fwrite (&s, sizeof (struct std), 1, fp);
fclose(fp);
printf ("Record appended.\n");
return (0);
}
