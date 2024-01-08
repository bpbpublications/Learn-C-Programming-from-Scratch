#include <stdio.h>  
int main () { 
char s; 
int a, b;
printf("Press + or a for addition - or s for subtraction * or m for multiplication / or d for division % or x for modulo division \n"); 
scanf ("%c", &s); 
printf("Input 2 No’s\n"); 
scanf ("%d%d", &a, &b); 
switch (s) {       
case 'a': 
case 'A':
case '+':
        printf("Sum = %d", a+b);			break;
case 's': 
case 'S':
case '-':        
printf("Difference = %d", a-b);		break;       
case 'm':  
case 'M':
case '*':    
printf("Product = %d", a*b);		break;
case 'd':   
case 'D':
case '/':    
printf("Quotient = %d", a/b); 		break;
case 'x':  
case 'X':
case '%':     
printf("Remainder = %d", a%b); 		break; 
default:          
printf("Invalid character\n"); 
   } 
return (0);
} 
