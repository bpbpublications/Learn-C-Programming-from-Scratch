//	Program to input student details and store in a file. 
#include<stdio.h>
int main ()
{    
char nm [50];    
int mks, i, num; 
FILE *fp; 
printf ("Input No. of students\n"); 
scanf ("%d",&num);    
fp= (fopen ("C:\\student.txt","w"));    
if (fp==NULL) 
 { 
       printf ("Cannot open file\n");
       exit(1); 
 } 
for (i=0;i<num;++i) 
 { 
printf ("Input name\n");
scanf ("%s",nm);       
printf ("Input Marks\n");
scanf ("%d",&mks); 
fprintf (fp,"\nName: %s \nMarks=%d \n",nm,mks); 
 }
fclose(fp); 
return(0); 
} 
