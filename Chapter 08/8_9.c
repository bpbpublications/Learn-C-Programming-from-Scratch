//	Updating a record in a Random-Access File
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
fseek (fp, sizeof (struct std), SEEK_SET);
fread(&s, sizeof(struct std), 1, fp);
s.mks = 92.5;
fseek(fp, sizeof(struct std), SEEK_SET);
fwrite (&s, sizeof(struct std), 1, fp);
fclose(fp);
printf ("Record updated\n");
return (0);
}
