
//Wild pointer
#include <stdio.h>
  int main () {
    // wild pointer
    int* ptr;		// un-initialized pointer
    printf("%d", *ptr);		// No Value because |ptr= &a;| like statement missing
    return 0;
}
