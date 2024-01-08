#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>  
int main()  
{     
initwindow(600,600);

setbkcolor(WHITE);	// set background color
setcolor(BLUE); 	//Set forecolor and draw in BLUE color

    line (100, 100, 300, 200);
    // Draw a rectangle
    rectangle (150, 250, 250, 350);

getch();
}
