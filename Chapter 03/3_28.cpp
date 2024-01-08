#include<stdio.h>
#include<conio.h>
int main () {
int a, b;  
char c;	
// 2 No’s are to be added FOR THE FIRST TIME but for subsequent additions, you can ask user if he wants 
do
{
printf("Enter 2 Nos to add\n");
	scanf ("%d%d", &a, &b); 
printf("sum = %d", a+b); 
printf("\nPress y to add 2 more numbers\n");
c=getche(); // getche() helps input a character
} while (c == 'y');
return(0);
}  	 

