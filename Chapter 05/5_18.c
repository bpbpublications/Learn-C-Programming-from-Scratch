#include <stdio.h>
#include <string.h>

int main () {
char str[20], substr [20];
int i, j, start, end;
printf ("Input a string\n");
scanf ("%s", str);
printf ("Input start and end index\n");
scanf ("%d%d", &start, &end);
j=start;
i=0;
if (start>=0 && end<strlen (str)) 
 {
while (i<=end)
{
	substr[i] = str[j];
	i++;
	j++;
}
 }
substr[i]=NULL;
// use substr function, substr (str, substr, start, end), to carry out the task
printf ("Substring is %s", substr); 
return (0);
}


