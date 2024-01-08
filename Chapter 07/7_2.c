//Enum example

#include <stdio.h>
struct Emp
{
    char nm [20];
    int age;
    float sal;
} ;
int main () 
{ 
struct Emp e1, e2; 	 	// Declare e1 and e2 of type Employee
printf ("Input Name, Age and Salary of First Employee\n"); 
scanf ("%s%d%f", e1.nm, &e1.age, &e1.sal); 
printf ("Input Name, Age and Salary of 2nd Employee\n"); 
scanf ("%s%d%f", e2.nm, &e2.age, &e2.sal); 
printf ("Name\t\tAge\t\tSalary\n");		// Heading
printf ("%s\t\t%d\t\t%f\n", e1.nm, e1.age, e1.sal);	
printf ("%s\t\t%d\t\t%f\n", e2.nm, e2.age, e2.sal);	
return (0); 	
} 
   

