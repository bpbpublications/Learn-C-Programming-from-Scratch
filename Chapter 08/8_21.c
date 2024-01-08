//	Deleting a record from a direct access file
#include <stdio.h>
struct std
{
int rn;
char nm [50];
};
int main ()
{
struct std s;
int r;
FILE *fp = fopen ("d.dat", "rb+");
if (fp == NULL)
 {
printf ("Cannot open the file.\n");
return (1);
 }
printf ("Enter Roll No. to delete\n");
scanf ("%d", &r);
fseek (fp, (r - 1) * sizeof (struct std), SEEK_SET);
fread (&s, sizeof (struct std), 1, fp);
s.rn = -1; 	// Mark as deleted
fseek (fp, (r - 1) * sizeof (struct std), SEEK_SET);
fwrite (&s, sizeof (struct std), 1, fp);
fclose(fp);
printf ("Record deleted.\n");
return(0);
}
