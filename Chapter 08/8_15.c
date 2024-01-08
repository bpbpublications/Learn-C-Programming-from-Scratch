//	Updating multiple records in a random-access file
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
printf ("Input Roll No. to update: ");
scanf ("%d", &r);
while (fread(&s, sizeof(struct std), 1, fp))
 {
    if (s.rn == r) 
{
        	printf ("Enter New marks: ");
      		scanf ("%f", &s.mks);
fseek (fp, -sizeof (struct std), SEEK_CUR);
fwrite (&s, sizeof (struct std), 1, fp);
}
}
fclose(fp);
printf ("Records updated successfully.\n");
return (0);
}
