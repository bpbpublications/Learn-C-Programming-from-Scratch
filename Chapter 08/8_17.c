//	Creating a direct access file
#include <stdio.h>
int main ()
{
FILE *fp = fopen ("d.dat", "wb");
if (fp == NULL)
 {
        printf ("Cannot create the file.\n");
        return (1);
 }
fclose(fp);
printf ("Direct access file created successfully.\n");
return (0);
}

