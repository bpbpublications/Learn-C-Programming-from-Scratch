#include <stdio.h>
#define DEBUG 
int main()
{
#ifdef DEBUG
    printf ("Debugging is enabled.\n");
#else
    printf ("Debugging is not enabled.\n");
#endif
return (0);
}
