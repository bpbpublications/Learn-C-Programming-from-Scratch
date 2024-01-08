#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>  
int main()  
{     
initwindow(600,600);

int left= 100, top=100, right=200, bottom=200, x= 300, y=150, radius=50; 

rectangle (left, top, right, bottom); 
circle (x, y, radius); 

setcolor (RED);    
circle (100,100,50); 
floodfill (100, 100, RED);		// fills circle with RED color    




getch();
}
