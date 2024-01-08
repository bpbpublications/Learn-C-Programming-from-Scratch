#include <stdio.h>
#define DEBUGMODE 1
int main()
{
#if DEBUGMODE
    printf ("Debugging is enabled.\n");
#else
    printf ("Debugging is disabled.\n");
#endif
return (0);
}
