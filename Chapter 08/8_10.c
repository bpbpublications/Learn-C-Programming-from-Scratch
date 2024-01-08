//	Deleting a record from a random-access file
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
printf ("Input Roll Number to Delete: ");
scanf ("%d", &r);
while(fread (&s, sizeof (struct std), 1, fp))
 {
   if (s.rn == r) 
{
            fseek (fp, -sizeof (struct std), SEEK_CUR);
            s.rn = -1;		// -ive Roll No. Means Invalid Student Details
            fwrite (&s, sizeof (struct std), 1, fp);
            printf ("Record deleted.\n");
            break;
       }
 }
fclose(fp);
return (0);
}
