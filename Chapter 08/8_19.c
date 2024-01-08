//	Reading a record from a direct access file
#include <stdio.h>
#include <stdio.h>
struct std 
{
int rn;
char nm [50];
};
int main () {
struct std s;
int r;
FILE *fp = fopen ("d.dat", "rb+");
if (fp == NULL) 
 {
        printf ("Cannot open the file.\n");
        return (1);
 }
printf ("Input Roll No. to search: ");
scanf ("%d", &r);
fseek (fp, (r - 1) * sizeof (struct std), SEEK_SET);
fread (&s, sizeof (struct std), 1, fp);
printf ("Record found: Roll No. = %d, Name = %s\n", s.rn, s.nm);
fclose(fp);
return (0);
}
