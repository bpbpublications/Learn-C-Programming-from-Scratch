#include <stdio.h>
#define DEBUG 			 // Uncomment this line to enable debugging
int main ()
{
#ifdef DEBUG
printf ("Debugging is enabled!\n");
#else
printf ("Debugging is disabled!\n");
#endif
return(0);
}
