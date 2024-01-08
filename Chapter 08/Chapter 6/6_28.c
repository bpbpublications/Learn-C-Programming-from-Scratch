//Dangling Pointer
#include <stdio.h>  
int main () {  
int *ptr;  
int a=560;  
ptr=&a;
printf("%p\n", ptr);		// ptr prints address of ‘a’
free(ptr); 				// you deallocated/ freed the memory
printf("%p", *ptr);		//will show a dangling (misleading/ false) address 
return 0;  
}
