#include<stdio.h>

int main () {
int p;
printf("Enter Percentage\n"); 
scanf ("%d", &p); 
if (p>=75)
{ 
printf("Distinction"); 
} 
else if (p>=60)
{ 
printf("First Division"); 
} 
else if (p>=50) { 
printf("2nd Division"); 
} 
else if (p>=40)
{ 
printf("3rd Division"); 
} 
else 
{ 
printf("Ohhh … You have failed!"); 
} 
return (0);
}


