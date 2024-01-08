#include<stdio.h>
int main () { 
int i=1, s=0; 
do 
{ 
printf("%d\t", i); 
s=s +i;
i++; 
} 
while (i<=10);   // in case of do..while, condition is terminated by ; 
printf("\nsum of series = %d",s);  
//Note: sum is to be printed only once that’s why its outside loop 
return (0); 
} 
