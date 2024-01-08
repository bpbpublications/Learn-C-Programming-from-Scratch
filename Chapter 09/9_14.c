#include<stdio.h>  
void init ();  
void end ();  
#pragma startup init  
#pragma exit end  
int main ()
{  
printf ("main method\n");  
return 0;  
}  
void init ()
{  
    printf ("init method\n");  
}   
void end ()  
{  
    printf ("end method\n");  
}
