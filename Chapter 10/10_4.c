#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>  
int main()  
{     
initwindow(600,600);

    int x = 50, y = 50;
    int radius = 30;
    int dx = 5, dy = 3;
    while (!kbhit()) {
        cleardevice();
        setcolor(YELLOW);
        circle(x, y, radius);
        floodfill(x, y, YELLOW);
        x += dx;        	// Update the circle's position
        y += dy;
       if (x <= radius || x >= getmaxx() - radius) 	// Bounce off the walls
         dx = -dx;
        if (y <= radius || y >= getmaxy() - radius)
        dy = -dy;
        delay (50);

}
getch();
}
