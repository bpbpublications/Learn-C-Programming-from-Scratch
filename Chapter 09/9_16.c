
#include <stdio.h>
#define Msg(x, y, z) \
   printf (#x "," #y " and " #z ": You are cute\n")
int main() {
   Msg (Usman, Zain, Imad);
   return 0;
}
