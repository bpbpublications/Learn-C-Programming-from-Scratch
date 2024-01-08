//	Writing records to a direct access file
#include <stdio.h>
struct std 
{
int rn;
char nm [50];
};
int main ()
{
struct std s;
FILE *fp = fopen ("d.dat", "rb+");
if (fp == NULL)
 {
printf ("Cannot open the file.\n");
return (1);
 }
printf ("Input Roll No\n");
scanf ("%d", &s.rn);
printf ("Enter Name: ");
scanf ("%s", s.nm);
fseek (fp, (s.rn - 1) * sizeof(struct std), SEEK_SET);
fwrite (&s, sizeof (struct std), 1, fp);
fclose(fp);
printf ("Record Write Successful.\n");
return(0);
}
