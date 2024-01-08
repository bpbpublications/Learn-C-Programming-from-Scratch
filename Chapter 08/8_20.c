//	Updating a record in a direct access file
#include <stdio.h>
struct std 
{
int rn;
char nm [50];
};

int main ()
{
struct std s,rec;
int r;
FILE *fp = fopen ("d.dat", "rb+");
if (fp == NULL)
 {
        printf ("Cannot open the file.\n");
        return (1);
 }
printf ("Enter Roll No. to update: ");
scanf ("%d", &r);
fseek (fp, (r - 1) * sizeof(struct std), SEEK_SET);
fread (&rec, sizeof (struct std), 1, fp);
printf ("Enter new Name: ");
scanf ("%s", s.nm);
fseek (fp, (r - 1) * sizeof (struct std), SEEK_SET);
fwrite (&s, sizeof (struct std), 1, fp);
fclose(fp);
printf ("Record updated.\n");
return(0);
}
