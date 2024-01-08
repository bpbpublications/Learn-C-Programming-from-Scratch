#include<stdio.h>
int countdig(int);
int main () {
  int n,d;
    printf ("Input a number\n");
    scanf("%d",&n);
    d = countdig (n);
    printf (" Number of digits in the number is:  %d \n\n", d);
    return (0);
}
int countdig(int n) {
    static int d=0;
     if(n!=0) {
          d++;
         countdig (n/10);
    }
    return (d);
}
