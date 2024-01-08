#include<stdio.h>
int main () { 
char c; 
printf("Input gender m for male or f for female\n"); 	
scanf ("%c", &c);
if (c == 'm') 
{ 
printf("You are a male"); 
} 
else if (c == 'f')
{ 
printf("You are a female"); 
} 
else
{ 
printf("Other Gender"); 
} 
return (0);
} 
