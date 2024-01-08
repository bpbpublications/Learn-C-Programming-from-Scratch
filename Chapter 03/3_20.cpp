#include <stdio.h>
int main () { 
int i=1;
while (i<=10)
{		//True, since i=1 which is <10		
printf("%d\t", i); 
i++; 		//take next value of i and check while condition again
} 
return (0); 
}
