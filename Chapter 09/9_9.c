#define N 0
#include <stdio.h>
int main()
{
#if N > 0 
// Positive number.
printf ("+ve No.");
#elif N < 0
// Negative number
printf ("-ve No.");  
#else  
// 0
printf ("Zero");
#endif  
return(0);
}
