#include <stdio.h>
#define concat(a, b) a##b
int main ()
{
printf ("%d", concat (10,20));
return(0);
}
