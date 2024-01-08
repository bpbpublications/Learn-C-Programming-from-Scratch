//	Program to demonstrate Create, Read & Write operations & on a random-access file
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
fp = fopen("s.dat", "wb");
if (fp == NULL)
 {
        printf ("File cannot be opened.\n");
        return (1);
 }
s.rn = 1;
strcpy(s.nm, "Zain");
s.mks = 95.5;
fwrite (&s, sizeof (struct std), 1, fp);
fclose(fp);
printf ("File created.\n");
fclose(fp);
fp = fopen("s.dat", "rb");
fread (&s, sizeof (struct std), 1, fp);
printf ("Roll No: %d\n", s.rn);
printf ("Name: %s\n", s.nm);
printf ("Marks: %.2f\n", s.mks);
return (0);
}
