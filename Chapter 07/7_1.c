//Enum example

#include <stdio.h>
int main ()
{			// Define an enumeration
 enum Fruits 
 {
       Apple,
       Banana,
       Cherry,
       Dates
 };
enum Fruits fav;	// Declare enumeration type
fav = Dates;		// Assign a value from the enumeration
switch (fav)
 {	// Use the enumeration constants in switch statements
case Apple:
printf ("Not my Favorite");
break;
case Banana:
printf ("Not my Favorite");
break;
case Cherry:
printf ("Not my Favorite");
break;
case Dates:
printf ("My Favorite");
break;
 }
return(0);
}    

