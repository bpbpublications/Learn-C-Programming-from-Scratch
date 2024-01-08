//Union Example
#include <stdio.h>
union UData
{ 
int x;    
float y;
char z[20]; 
}; 
int main()
{
union UData d;         
printf ("Memory size occupied by data: %d\n", sizeof (d)); 
return (0);
} 
