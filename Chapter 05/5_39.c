#include <stdio.h>
int main () 
{
char str [3][5] = {
        "Apricot",
        "Banana",
        "Mango"
};
// Accessing individual characters
printf ("Second character of the first Fruit: %c\n", str [0][1]); 		// P
    printf ("3rd character of second string: %c\n", str [1][2]); 		// n
printf ("Fifth character of the third string: %c\n", str [2][4]); 		// o
return (0);
}
