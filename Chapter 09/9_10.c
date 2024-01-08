#include <stdio.h>
#define UNIX 1
int main () {
   #ifdef UNIX
   printf ("UNIX is ON\n");
   #endif
  return (0);
}
