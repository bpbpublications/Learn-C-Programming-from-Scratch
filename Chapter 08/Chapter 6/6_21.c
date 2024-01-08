//Pointer Equality comparison:
#include <stdio.h>
#include <stdlib.h>
int main()
{
int a=10,b=20;
int* p1;
int* p2;
// make p1 and p2 to some addresses	
// p1=&a;		
//p2=&b;
// Compare the 2 pointers
if (p1 == p2)
 {
     printf("p1 and p2 point to the same memory address");
 } 
else
 {
     printf("p1 and p2 point to the different memory address");
 }
return (0);
}
