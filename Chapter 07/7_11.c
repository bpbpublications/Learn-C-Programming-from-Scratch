//Union Example 3
#include <stdio.h>
union Data
{
    int intVal;
    double doubleVal;
    char stringVal[20];
    char type; // Discriminant
};
int main(){
union Data d;
d.type = 'i';	 // Indicates that intVal is valid
if (d.type == 'i')
 {
    d.intVal = 42;
    printf("Value: %d\n", d.intVal);
 }
else
 {
    printf( "Invalid type.\n");
    exit(1);
}	
return(0);	
}





