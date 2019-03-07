#include <stdio.h>
extern int a, b;
extern int c;

int main () {
    int a,b ;
    a = 911;
    b = 119;
    c = a + b;

    printf("Sum is : %d \n", c);
    
    return 0;
}