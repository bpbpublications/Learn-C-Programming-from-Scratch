#include <stdio.h>
struct room
{
    int len;
    int bred;
};

void printarea (struct room r)
{
printf ("Length= %d and Breadth = %d\n", r.len, r.bred);
printf ("Area= %d", r.len*r.bred);
}
int main()
{
struct room r = {30, 12};
printarea (r);
return 0;
}

