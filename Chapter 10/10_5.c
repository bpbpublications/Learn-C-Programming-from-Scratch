#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>  
int main()  
{     
initwindow(600,600);

int arr [] = {320, 150, 400, 250, 250, 350, 320, 150}; // for drawpoly ()

arc(100, 100, 0, 135, 50);				//arc
line (100,100,200, 200); 				//Line
rectangle (100,100,200,200);			//Rectangle
circle (50,50,50);					// Circle
drawpoly (4, arr); 	// polygon (Triangle) 4 points/ 3 vertices in this example



getch();
}
