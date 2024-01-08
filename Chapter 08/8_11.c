//	Searching for a record in a random-access file
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
fp = fopen("s.dat", "r+b");
if (fp == NULL)
 {
        printf ("File cannot be opened.\n");
        return (1);
 }

printf("Input search Roll No.\n ");
scanf ("%d", &r);
while (fread (&s, sizeof(struct std), 1, fp))
 {
  if (s.rn == r)
 	{
printf ("Roll No: %d\n", s.rn);
printf ("Name: %s\n", s.nm);
printf ("Marks: %.2f\n", s.mks);
exit(0);
    }
 }
printf ("Record not found.\n");
fclose(fp);
return (0);
}
