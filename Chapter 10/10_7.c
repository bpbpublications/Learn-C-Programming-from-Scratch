#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>  
int main()  
{     
initwindow(600,600);
 //display Message an left corner of the screen

    outtextxy (0, 0, "Welcome to Graphics World"); 	         

 //center of the screen
   outtextxy(getmaxx() / 2,  getmaxy() / 2, "Welcome to Graphics World");


getch();
}
