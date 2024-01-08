#include <stdio.h>
int main () { 
int i; 

for (i=1; i<=10; i++)
{		// when i=2 control skips the following statements resumes next iteration
if (i==2) 
{
continue;
}
printf("%d\t", i); 
} 
return (0); 	
}
