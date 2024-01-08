#include <stdio.h>
#pragma GCC poison poison_function
int main()
{
poison _function ();		// This will trigger a compilation error
printf ("Learning Preprocessors\n");
return (0);
}
