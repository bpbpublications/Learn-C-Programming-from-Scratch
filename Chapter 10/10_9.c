#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>  
int main()  
{     
initwindow(600,600);

int gm, mx, x, y;
char array [100]; 

mx = getmaxx ();
x=getx ();   
y=gety (); 
sprintf (array, "Current X and Y coordinates are %d and %d.", x, y); 
sprintf (array, "Maximum X coordinate for current graphics mode and driver = %d.", mx);   
outtext (array);    





getch();
}
