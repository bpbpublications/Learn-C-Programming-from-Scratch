//	Program to count number of records in a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
   int rno;
   char name [20];
};
int main () {
   FILE *fp;
   fp= fopen ("s.txt", "w");
   if (fp == NULL) {
printf ("Error to open the file");
   //exit (1);
}
struct student s;
int n;
do
     {
      printf("\nName\n");
      scanf ("%s", &s.name);
      printf ("Roll Number\n");
      scanf ("%d", &s.rno);
      fwrite (&s, sizeof (s), 1, fp);
printf ("Press y to Input another student’s details\n");
 }
while (getche () == 'y');
fclose (fp);
fp = fopen ("s.txt", "r");
if (fp == NULL) {
 printf ("Error opening the file");
 exit (1);
}
while (fread (&s, sizeof (s), 1, fp)) {
printf ("Roll No. = %d\t Name = %s\n", s.rno, s.name);
}
fseek (fp, 0, SEEK_END);
n=ftell (fp);
printf ("\nNo. Of records in the file = %d", n/sizeof (struct student));
fclose (fp); 
return (0);
}
