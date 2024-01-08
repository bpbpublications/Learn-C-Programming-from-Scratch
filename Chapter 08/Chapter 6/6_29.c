//Void Pointer
#include <stdio.h>
 int main () {
int a = 10;
float b = 3.5;
void* p = &a;	
printf("Address of a = %p\n", p);						// holds address of int 'a'
p = &b; 				// can also store address of float 'b'
printf("Address of b =%p\n", p);
}
