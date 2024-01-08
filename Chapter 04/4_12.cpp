#include <stdio.h>
// Define a function type using a function pointer
typedef int (*task)(int, int);
int arithmetic(int a, int b, task op) {
    return op(a, b);
}
// Example operation functions
int sum(int a, int b) {
return a + b;
}
int difference(int a, int b) {
    return a - b;
}
int product(int a, int b) {
    return a * b;
}
int main() {
int n1, n2;
printf("Input 2 numbers\n");
scanf("%d%d", & n1, &n2);
// Pass different operation functions to the calculate function
int s = arithmetic(n1, n2, sum);
int d = arithmetic(n1, n2, difference);
    int p = arithmetic(n1, n2, product);
    printf("Sum: %d\n", s);
    printf("Difference: %d\n", d);
    printf("Product: %d\n", p);
    return (0);
}
