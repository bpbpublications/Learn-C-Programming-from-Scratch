#include <stdio.h>  
int main () { 
char s; 
int a, b;
printf("Press a for addition s for subtraction m for multiplication d for division x for modulo division \n"); 
scanf ("%c", &s); 
printf("Input 2 No’s\n"); 
scanf ("%d%d", &a, &b); 
switch (s) {       
case 'a': 
        printf("Sum = %d", a+b);			break;
case 's':         
printf("Difference = %d", a-b);		break;       
case 'm':        
printf("Product = %d", a*b);		break;
case 'd':         
printf("Quotient = %d", a/b); 		break;
case 'x':         
printf("Remainder = %d", a%b); 		break; 
default:          
printf("Invalid character\n"); 
   } 
return (0);
} 
