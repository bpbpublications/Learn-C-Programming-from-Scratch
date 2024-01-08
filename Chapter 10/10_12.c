//Program for moving Truck 

#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>  
int main()  
{   
initwindow(900,900);



int i;
char a[5]; 
settextjustify ( CENTER_TEXT, CENTER_TEXT );
settextstyle (DEFAULT_FONT, HORIZ_DIR,3); 
setcolor (RED); 
for (i = 30; i >=0; i--) {
   sprintf (a,"%d", i); 
   outtextxy (getmaxx ()/2, getmaxy ()/2, a);	// Timer in middle of the window
   delay (1000); 			// delay of 1000 Milliseconds ( =1 Sec)
   if (i == 0)
    break;       
cleardevice (); 
  } 

 





getch();
}
