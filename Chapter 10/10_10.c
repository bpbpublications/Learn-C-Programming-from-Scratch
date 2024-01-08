#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>  
int main()  
{     
initwindow(600,600);

int x = 320, y = 240, radius;   

for (radius = 25; radius <= 125; radius = radius + 20)    
circle (x, y, radius);  
 
getch();
}
