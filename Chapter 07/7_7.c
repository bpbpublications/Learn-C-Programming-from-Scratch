//Nested Structure
#include <stdio.h>
struct dt 
{
    int dd;
    int mm;
    int yy;
};
struct Emp {
    int id;
    char nm [50];
    struct dt dob;
};
int main() 
{
struct Emp emp = {30, "Omar Zain", {01,01,1990}};
printf ("ID: %d\n", emp.id);
printf ("Name: %s\n", emp.nm);
printf ("Birth date: %d/%d/%d\n", emp.dob.dd, emp.dob.mm, emp.dob.yy);
return (0);
}
