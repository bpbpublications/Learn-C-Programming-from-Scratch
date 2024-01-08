#include <stdio.h>
#include <stdlib.h>
 
int s,av;
void sum (int a, int b) {
   s=a+b;
   av=s/2;
}
 
// Function 2
void avg(void (*fptr) ()) {

   	fptr(10,20) ;  // Callback function
    printf("Average = %d\n",av) ;
}
 
int main() {
 
    // Declare a function pointer
    void *ptr ;
 
    // Assign func1 to ptr
    ptr = sum ;
 
    // call the func2
    avg(ptr) ;
    return 0 ;
}