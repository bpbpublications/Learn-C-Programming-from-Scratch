#include <stdio.h>
double power (double bs, int exp) {
    if (exp == 0) {
        return 1.0;
    }
    else if (exp > 0) {
        return bs * power (bs, exp - 1);
    }
    else {
        return (1.0 / bs) * power (bs, exp + 1);
    }
}
int main () {
    double bs, exp, res;
    printf ("Input 2 positive integers as base and exponent\n");
    scanf ("%lf%lf", &bs, &exp);
    res = power (bs, exp);
    printf ("%.2lf raised to the power of %lf is %.2lf\n", bs, exp, res);
    return (0);
}
