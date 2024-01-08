#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>  
int main()  
{     
initwindow(600,600);

//Drawing (multiple) concentric circles
    int x = 300, y = 200, rad;
   for (rad = 20; rad <= 120; rad = rad + 20)
 	circle (x, y, rad);




getch();
}
