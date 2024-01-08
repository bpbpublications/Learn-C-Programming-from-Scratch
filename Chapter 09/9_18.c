#include <stdio.h>
#if !defined  (msg) 
#define msg "How are You" 
#endif 
int main ()
{
printf ("Dear %s\n", msg);    
return (0); 
} 
