#include <stdio.h>
void startup_func (void) __attribute__((constructor));
void startup_func(void)
{
    printf ("Function will get executed before main().\n");
}

int main()
{
    printf ("This is our main function.\n");
    return (0);
}
