
#include<stdio.h>
int g_x = 5; 
void func () {
int l_x = 10; 
static int s_x = 15; 
printf ("Global Variable = %d, Local Variable = %d an Static Local Variable = %d\n", g_x, l_x, s_x);
} 

int main()
{
	func();
}