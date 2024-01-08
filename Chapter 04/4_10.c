#include <stdio.h>
#include <stdlib.h>
 

void func () {
  printf("Hello from function\n") ;
}
 
// Function 2
void cbf(void (*fp) ()) {

   	
    printf("Hello from Call Back function\n") ;
	fp() ;  // Callback function
}
 
int main() {
 
    // Declare a function pointer
    void *ptr ;
 
    // Assign func1 to ptr
    ptr = func;
 
    // call the func2
    cbf(ptr) ;
    return 0 ;
}